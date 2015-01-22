// http://en.wikipedia.org/wiki/Determinant
#include <iostream>
using namespace std;

class Coordinate {
 public:
  Coordinate() {}
  Coordinate(int x, int y, int z) : x_(x), y_(y), z_(z) {}

  int x() { return x_; }
  int y() { return y_; }
  int z() { return z_; }

 private:
  int x_;
  int y_;
  int z_;
};

int main() {
  int t, x, y, z, i;
  cin >> t;

  while (t--) {
    Coordinate cd[4];
    for (i = 0; i < 4; i++) {
      cin >> x >> y >> z;
      cd[i] = Coordinate(x, y, z);
    }
    Coordinate v1 = Coordinate(cd[1].x() - cd[0].x(),
                               cd[1].y() - cd[0].y(),
                               cd[1].z() - cd[0].z());
    Coordinate v2 = Coordinate(cd[2].x() - cd[0].x(),
                               cd[2].y() - cd[0].y(),
                               cd[2].z() - cd[0].z());
    Coordinate v3 = Coordinate(cd[3].x() - cd[0].x(),
                               cd[3].y() - cd[0].y(),
                               cd[3].z() - cd[0].z());
    int det1 = v1.x() * v2.y() * v3.z() + v1.y() * v2.z() * v3.x() + v1.z() * v2.x() * v3.y();
    int det2 = v1.z() * v2.y() * v3.x() + v1.x() * v2.z() * v3.y() + v1.y() * v2.x() * v3.z();
    if ((det1 - det2) == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
