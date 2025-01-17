# ProJor Multi Platform UI App Example

This repository contains the source code for the ProJor Multi Platform UI App Example application. The repository uses [ProJor](https://docs.siocode.hu/projor), the model-based code generator to maintain most of the source code. See in the `.projor/` directory to examine the schema, model, and templates used to generate the code.

This example is documented [here](https://docs.siocode.hu/projor/full-examples/multi-platform-ui.html).

This repository generates the **same application** for **3 different platforms**:

* Universal Windows Platform (UWP)
* Web (React + Tailwind)
* Linux (GTK)

## Screenshots

_Universal Windows Platform (UWP)_

| Image 1 | Image 2 |
| --- | --- |
| ![Main menu on UWP](screenshots/uwp-mainmenu.png) | ![Product List Page on UWP](screenshots/uwp-productlistpage.png) |
| _This screenshot shows how the main menu looks like on Windows, using UWP._ | _This screenshot shows how the product list page looks like on Windows, using UWP._ |

_Web (React + Tailwind)_

| Image 1 | Image 2 |
| --- | --- |
| ![Main menu on Web](screenshots/web-mainmenu.png) | ![Product List Page on Web](screenshots/web-productlistpage.png) |
| _This screenshot shows how the main menu looks like on the web, using React and Tailwind._ |  _This screenshot shows how the product list page looks like on the web, using React and Tailwind._ |

_Linux (GTK)_

| Image 1 | Image 2 |
| --- | --- |
| ![Main menu on Linux](screenshots/gtk-mainmenu.png) | ![Product List Page on Linux](screenshots/gtk-productlistpage.png) |
| _This screenshot shows how the main menu looks like on Linux, using GTK._ |  _This screenshot shows how the product list page looks like on Linux, using GTK._ |

## Platform Docs

Building & development instructions for the respective platforms are available in each platform project's own README file:

* [Universal Windows Platform (UWP)](windows-uwp/README.md)
* [Web (React + Tailwind)](web-react/README.md)
* [Linux (GTK)](linux-gtk/README.md)

## Generated Docs

The apps contain the following pages:

* **Product List Page**: The page that lists all products
* **Product Detail Page**: The page that shows the details of a product
