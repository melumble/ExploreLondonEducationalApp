# How to add a location to the map

## Easy mode

If all you want to show for a location is a title, a couple paragraphs, and a
picture, we have a system that can automatically set it up for you. It picks up
location entries from the `textInformation` file in the `resources` folder
and---for each entry---adds a pin to the map that will open an information
window when clicked. The format for a location entry is as follows:

```
title
category
description

picture filepath
icon filepath
pin x
pin y


```

There are a couple of things to note:

- `description` can be multiline, but it cannot have a blank line in the
  middle of it, as a blank line is what signals to the parser that the
  description is done.
- `picture filepath` is a path to the picture to be displayed in the
  information window.
- `icon filepath` is a path to the picture to be displayed on the pin. **To
  avoid complications with different-sized pictures, the map requires the icon
  to be 320x320, and will crash the app if given an image with different
  dimensions.** Hopefully, this isn't too annoying; I figured this would be the
  easiest way to avoid problems.
- `pin x` and `pin y` are coordinates to where the bottom of the pin should be
  placed on the map. You can get the coordinates of anywhere on the map by
  right-clicking on it, which will print the coordinates of the mouse to the
  console.
- There need to be exactly two lines after a location entry.

Here is an example location entry:

```
Tower Bridge
Bridges
<p>The tower bridge is cool.</p>
<p>Note that HTML p tags are a good way to break the description up.</p>
<p>They add a bit of space in between each paragraph.</p>

:/images/tower_bridge.png
:/icons/tower_bridge.png
5480.0
2000.0


```

## Custom fun thing

If you want to deviate from the template, the map has a method with this
signature:

```cpp
void addPin(qreal x, qreal y, QImage icon, std::function<void()> callback);
```

This method should _hopefully_ be broad enough that it allows you to do
whatever cool idea you have. Its parameters are:

- `x`: the x-value of the bottom of the pin
- `y`: the y-value of the bottom of the pin (remember that you can right-click
  on the map to get the coordinates of the mouse's location)
- `icon`: a `QImage` that holds the icon to be displayed on the pin. As with
  the basic location entries, the icon must be 320x320.
- `callback`: a function that is called when the pin is clicked. This could
  open a new window, change something on the screen, or do anything else you
  want!

An example usage of this method is if `MainWindow`'s constructor had this
snippet, which adds a pin to the map that prints a message to the console when
clicked:

```cpp
ui->mapExplorer->addPin(5480.0, 2000.0, QImage(":/icons/tower_bridge.png"), [] {
    qDebug() << "hi!";
});
```
