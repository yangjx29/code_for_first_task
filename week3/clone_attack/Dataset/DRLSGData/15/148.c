int main () {
    int Vr73lRoEfiNb;
    int n;
    int fR4ot6 = 0, firsty = 0, lastx = 0, lasty = 0;
    int tz18tKf2mZ;
    int a [101] [101] = {(719 - 719)};
    int i;
    int D9WYkG28;
    cin >> n;
    tz18tKf2mZ = 0;
    Vr73lRoEfiNb = (419 - 419);
    {
        i = (480 - 479);
        while (i <= n) {
            {
                D9WYkG28 = (333 - 332);
                while (n >= D9WYkG28) {
                    cin >> a[i][D9WYkG28];
                    D9WYkG28++;
                }
            }
            i++;
        }
    }
    {
        i = 1;
        while (i <= n) {
            {
                D9WYkG28 = 1;
                while (n >= D9WYkG28) {
                    if (!(0 != a[i][D9WYkG28])) {
                        firsty = D9WYkG28;
                        fR4ot6 = i;
                        tz18tKf2mZ = 1;
                        break;
                    }
                    D9WYkG28++;
                }
            }
            if (!(1 != tz18tKf2mZ))
                break;
            i++;
        }
    }
    {
        i = 1;
        while (i <= n) {
            D9WYkG28 = 1;
            while (D9WYkG28 <= n) {
                if (a[i][D9WYkG28] == 0) {
                    lasty = D9WYkG28;
                    lastx = i;
                }
                D9WYkG28++;
            }
            i++;
        }
    }
    {
        i = 1;
        while (i <= n) {
            {
                D9WYkG28 = 1;
                while (D9WYkG28 <= n) {
                    if (a[i][D9WYkG28] == 0)
                        Vr73lRoEfiNb++;
                    D9WYkG28++;
                }
            }
            i++;
        }
    }
    cout << (lastx - fR4ot6 + 1) * (lasty - firsty + 1) - Vr73lRoEfiNb << endl;
    return 0;
}

