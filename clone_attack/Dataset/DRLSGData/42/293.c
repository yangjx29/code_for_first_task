int main () {
    int Km3NAqu;
    int V7kzDYfbJrO;
    int UQRZtU4Gl3so;
    int wC9YwsIbX [(100831 - 821)];
    int mPZQq9e;
    int y14MkqJXa;
    scanf ("%d", &V7kzDYfbJrO);
    {
        mPZQq9e = 692 - 692;
        for (; mPZQq9e < V7kzDYfbJrO;) {
            scanf ("%d", &wC9YwsIbX[mPZQq9e]);
            mPZQq9e = mPZQq9e + 1;
        }
    }
    scanf ("%d", &UQRZtU4Gl3so);
    for (mPZQq9e = (679 - 679); mPZQq9e < V7kzDYfbJrO -(436 - 435); mPZQq9e = mPZQq9e + 1) {
        if (!(UQRZtU4Gl3so != wC9YwsIbX[mPZQq9e])) {
            for (y14MkqJXa = mPZQq9e + 1; y14MkqJXa < V7kzDYfbJrO; y14MkqJXa = y14MkqJXa + 1) {
                if (wC9YwsIbX[y14MkqJXa] != UQRZtU4Gl3so) {
                    wC9YwsIbX[mPZQq9e] = wC9YwsIbX[y14MkqJXa];
                    wC9YwsIbX[y14MkqJXa] = UQRZtU4Gl3so;
                    break;
                }
            }
        }
    }
    for (mPZQq9e = V7kzDYfbJrO -1; 0 <= mPZQq9e; mPZQq9e = mPZQq9e - 1) {
        if (wC9YwsIbX[mPZQq9e] != UQRZtU4Gl3so) {
            Km3NAqu = mPZQq9e;
            break;
        }
    }
    for (mPZQq9e = 0; mPZQq9e <= Km3NAqu; mPZQq9e = mPZQq9e + 1) {
        if (mPZQq9e < Km3NAqu) {
            printf ("%d ", wC9YwsIbX[mPZQq9e]);
        }
        if (mPZQq9e == Km3NAqu) {
            printf ("%d", wC9YwsIbX[mPZQq9e]);
        }
    }
    return 0;
}

