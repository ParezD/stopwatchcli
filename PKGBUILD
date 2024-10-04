pkgname="stopwatchcli"
pkgver="1.0"
pkgrel=1
epoch=
pkgdescs="it is a simple cli stopwatch"
arch=("x86_64")
url=""
license=("MIT")
groups=()
depends=()
makedepends=()
checkdepends=()
optdepends=()
provides=()
conflicts=()
repalces=()
backup=()
options=()
install=
changelog=
source=("$pkgname")
noextract=()
sha256sums=("SKIP")
validpgpkeys=()

package() {
  mkdir -p "${pkdir}/usr/bin"
  cp "${srcdir}/${pkgname}" "${pkgdir}/usr/bin/welcome"
  chmod +x "${pkgdir}/usr/bin/stopwatchcli"
}

