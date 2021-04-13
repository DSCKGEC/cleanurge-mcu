# cleanurge-mcu
This is the repo for the microcontroller part of project Cleanurge

# Cleanurge

[![Contributors](https://img.shields.io/github/contributors/dsckgec/cleanurge-backend.svg)](https://github.com/dsckgec/cleanurge-backend/graphs/contributors) [![Forks](https://img.shields.io/github/forks/dsckgec/cleanurge-backend.svg)](https://github.com/dsckgec/cleanurge-backend/network/members) [![Issues](https://img.shields.io/github/issues/dsckgec/cleanurge-backend.svg)](https://github.com/dsckgec/cleanurge-backend/issues) [![Pull Request](https://img.shields.io/github/issues-pr-closed-raw/dsckgec/cleanurge-backend)](https://github.com/dsckgec/cleanurge-backend/pulls)


A scalable waste management system powered by IoT.

## Contents

1. [Description](#description)
1. [Project structure](#project-structure)
1. [Project roadmap](#project-roadmap)
1. [Getting started](#getting-started)
1. [Live demo](#live-demo)
1. [Built with](#built-with)
1. [Contributing](#contributing)
1. [Authors](#authors)
1. [License](#license)
1. [Acknowledgments](#acknowledgments)

## Description

### What's the problem?
Today, waste is a significant global issue. Increasing volumes of waste are being generated as the global population and living standards rise.
The environmental impact is significant, with massive volumes of waste generated annually with only basic or little treatment to minimise its impact. People are increasingly concerned about the production of waste and its effect, and are seeking ways to deal with the problem.

### How can this project help?
Our project serves to prevent overaccumulation of waste at public bins by maintaining a log of their waste accumulation levels. The authorities will have the feature to get live status of the various public bins and appoint garbagemen to clear off any bins on overaccumulation. Moreover, the local residents will be able to report if there is an urgent attention needed in case of an overflow outside the garbage bins or excess accumulation of wastes nearby.

### The idea
The idea is to have wireless beacons configured at various public bins to detect and measure the level of waste accumulation at the bins. When the level at any of the bins cross a threshold, a request is triggered to a web server that is then used to send notifications to the authorities in an app as well as web based software. The mobile application also supports the feature for individuals living in the locality to report of any waste accumulation directly to the authorities.

## Project structure

**This repository hosts only the hardware side code**

```
/
  ├── .github/            github related files like PR templates, contribution guidelines
  ├── PIO-WiFi-GPS
  ├── PIO-Cellular-GPS
  ├── .env                environment variables used in the project
  ├── .gitignore          stores files and directories to be ignored in commits
  ├── LICENSE             the open source license
  ├── code_of_conduct.md  code of conduct for open source contribution
  ├── contributing.md     contribution guidelines
  └── readme.md           details and instructions about the project go here
```

## Project roadmap

> TODO: Features to be updated

The project currently does the following things.

- Feature 1
- Feature 2
- Feature 3

See below for our future steps.

- Platform IO based firmware for the microcontroller unit
- A sensor to measure the level of waste in the garbage bins which will be accurate as well as economic
- The units are to be solar powered to reduce the maintenance and energy cost.
- Some GPS arrangement to fetch the location of the beacon
- An arrangement to supply internet connection to the beacons in a cheap and practical way
- The data channel should be secure

## Getting started

Everyone is welcomed to contribute to our project. Mentioning in bold, you do not need to know the tech stack and tools beforehand to be a part of our project. This is a learn-and-build projects where the contributors build alongside learning the various concepts and technologies involved.
Below are a few prerequisites and installation guides:

### Prerequisites

#### Softwares needed

-   An IDE that supports Platform IO

#### Knowledge needed

The best way to learn the following is to google each and everything!

-   Very basic understanding of git and github:

    -   What are repositories (local - remote - upstream), issues, pull requests
    -   How to clone a repository, how to fork a repository, how to set upstreams
    -   Adding, committing, pulling, pushing changes to remote repositories

-   For backend:

    -   [Reading this blog on overview of HTTP](https://developer.mozilla.org/en-US/docs/Web/HTTP/Overview)
    -   [Reading this blog on APIs](https://developer.mozilla.org/en-US/docs/Learn/JavaScript/Client-side_web_APIs/Introduction)
    -   [Reading this blog on npm](https://www.freecodecamp.org/news/what-is-npm-a-node-package-manager-tutorial-for-beginners/)
    -   Creating a free MongoDB cluster and fetching the connection URI. (you may read my gist on how to - [here](https://gist.github.com/singhayushh/426f10353a8051593828e92c139ebdbc))

-   For frontend:
    -   Understanding the differences between HTML and EJS.
    -   Using variables, if else, loops in EJS.
    -   CSS !

### Installing

A step by step series of instructions that tell you how to get the project running locally is given below. Google every issue you face following the below instructions or just ask us in our Discord / WhatsApp group.

-   Fork and clone the repository followed by opening the project in your text editor (with a terminal)
-  If you are working with VS code, just go to Extensions -> Install Platform IO
-  Press the <img display = "inline" width = 20px src = "https://user-images.githubusercontent.com/55695557/114508611-324b9e80-9c52-11eb-85aa-d313bdef3640.png" > button in the status bar and Open the project folder which starts with PIO...
-  Main code lies in the ```src/``` foler inside each PIO project
-  ```include/``` includes ```.h``` header files
-  ```lib/``` contains the libraries exclusively added from outside
-  ```platformio.ini``` contains the library dependencies, board properties and all, head on to their [website](https://platformio.org) for exact details on that ini files.

## Live demo

> TODO: deploy over heroku or netlify or some other platform with CI/CD support

## Built with

- [Platform IO](https://platformio.org)
- [Arduino Framework](https://arduino.cc)
- [Firebase](https://firebase.google.com)

## Contributing

Please read [contributing.md](contributing.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Authors

<a href="https://github.com/DSCKGEC/cleanurge-mcu/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=DSCKGEC/cleanurge-mcu" />
</a>

## License

This project is licensed under the GNU Public License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

[contributors-img](https://contrib.rocks)
