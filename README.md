GPGMail
=======

GPGMail is a plugin for OS X's Mail.app, which let's you  
send and receive secure, OpenPGP encrypted and signed messages.

Important
-------

GPGMail currently doesn't support macOS Sierra (10.12). We're actively working on it.
Follow us on [Twitter](https://twitter.com/gpgtools) for updates.

Updates
-------

The latest releases of GPGMail can be found on our [official website](https://gpgtools.org/).

For the latest news and updates check our [Twitter](https://twitter.com/gpgtools).

Visit our [support page](https://gpgtools.tenderapp.com) if you have questions or need help setting up your system and using GPGMail.

Localizations are done on [Transifex](https://www.transifex.com/projects/p/GPGMail/).

Prerequisite
------------

In order to use GPGMail you need to have GnuPG installed.
You can either build your own version, use one from [homebrew](http://brew.sh) or find a packaged version for OS X at [gpgtools.org](https://gpgtools.org)

Build
-----

#### Clone the repository
```bash
git clone https://github.com/GPGTools/GPGMail.git
cd GPGMail
```

#### Grab Dependencies

In order to communicate with GnuPG we use our own Objective-C framework called [Libmacgpg](https://github.com/GPGTools/Libmacgpg).
It's necessary to clone the Libmacgpg repository first, before building GPGMail.

```bash
cd Dependencies
git clone https://github.com/GPGTools/Libmacgpg.git
# you need to install Libmacgpg, instruction from https://github.com/waleedsamy/Libmacgpg/blob/dev/Readme.md
# high-sierra branch is compatibe with Libmacgpg dev branch (c9e82d52179)
cd ..
```

#### Build
```bash
make
```

#### Install
```bash
mkdir -p ~/Libray/Mail/Bundles
cp -rp build/Release/GPGMail.mailbundle to ~/Libray/Mail/Bundles
```
Re-start Mail.app and you get 30 day trial again of gpgmail plugin (if recompling this package stop resitting the trial period, I'll remove the part about licence from code)


System Requirements
-------------------

* Mac OS X >= 10.9 (macOS Sierra is not yet supported!)
* Libmacgpg
* GnuPG
