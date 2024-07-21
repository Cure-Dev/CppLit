# Compilation

## Preparation

### Tools Needed

Required: C/C++ Compilation Toolchain, Make(?), CMake
Recommend: Git

### Tools Installation

Do you need it? I will add it if yes.

## Get Source Code

### Pull Using Git (Recommended)

Example:

```sh
git pull https://github.com/litlang/cpplit.git main
```

Official Git Sources:
- [GitHub - Litorg](https://github.com/litlang/cpplit.git)
- [GitHub - Cure-Dev](https://github.com/cure-dev/cpplit.git) **(NOT RECOMMENDED!)**
- [Gitee - Litorg](https://gitee.com/litorg/cpplit.git)

Difference(?) between branches:
- main - the stable version
- dev - the version under development
- feature - the version with some features. usually be alpha or beta version.
- test - the version under testing

For most users, we recommend to pull the `main` branch.

### Download Source Code

If you don't want to install Git, or your Git unfortunately went down, you can download Lit source code instead.

For example, you can download source code on GitHub by clicking the button 'Download ZIP'.  
Or download from other third-party services. Like foo, bar...

## Resolve Dependencies

You can download or compile dependencies for platforms you need. The dependencies list is below.

| Name | Necessity | URL |
|:----:|:---------:|:---:|
| GMP  | Required  | <https://gmplib.org> |
| codec| Required  | <https://github.com/litlang/codec> |
| losh | Required  | <https://github.com/litlang/losh |

If you don't want to collect them by yourself, you can download them all from <https://github.com/litlang/cpplit-deps>.  
The filename format is `<project-name>/<os>-<cpu-arch>-<os-bit-arch>.zip`, such as `losh/linux-x86-64.zip`.

Tips: I use JSdelivr to download them from github.

Then, put them into deps/ directory. (Like deps/losh)

## CMake Compilation

Example:
```sh
mkdir build;
cd build;
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=../dist ..;
make install;
```

CMake usage: `cmake [options] <project-direcory>`

<!---->
options:
- -DCMAKE_INSTALL_PREFIX: destinate directory which you want to install to. Default depends on your system. (e.g. [Linux] /usr/local/bin)
- -DCMAKE_BUILD_TYPE: ...

## Test

Yes! You have finished all steps. Then the only thing you need to do is check if your Lit does work.  
do `<path-to-your-destination-dir>/bin/lit`, see if there are some outputs. (You should add `=v` arg. We will repair it in the future.)

If that doesn't work, see [Compilation FAQ](#)