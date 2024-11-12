int main () {
    char str1 [101];
    char str2 [101];
    int YB0ts7R4Lkob, i, zp3WUT2wQx, k, KqrJI3uiaslg [(374 - 273)] = {(675 - 675)}, num2 [(584 - 483)] = {(816 - 816)}, vMhHvkFEl5 [101] = {(108 - 108)};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cin >> YB0ts7R4Lkob;
    cin.get ();
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (YB0ts7R4Lkob > i) {
            cin.getline (str1, 101);
            cin.getline (str2, 101);
            cin.get ();
            memset (KqrJI3uiaslg, 0, sizeof (KqrJI3uiaslg));
            memset (num2, 0, sizeof (num2));
            for (zp3WUT2wQx = 0; strlen (str2) > zp3WUT2wQx; zp3WUT2wQx = zp3WUT2wQx + 1)
                num2[zp3WUT2wQx] = str2[strlen (str2) - zp3WUT2wQx - 1] - '0';
            for (zp3WUT2wQx = 0; strlen (str1) > zp3WUT2wQx; zp3WUT2wQx = zp3WUT2wQx + 1)
                KqrJI3uiaslg[zp3WUT2wQx] = str1[strlen (str1) - zp3WUT2wQx - 1] - '0';
            memset (vMhHvkFEl5, 0, sizeof (vMhHvkFEl5));
            {
                k = 0;
                while (strlen (str1) > k) {
                    if (KqrJI3uiaslg[k] - num2[k] < 0) {
                        vMhHvkFEl5[k] = KqrJI3uiaslg[k] - num2[k] + 10;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        KqrJI3uiaslg[k + 1]--;
                    }
                    else
                        vMhHvkFEl5[k] = KqrJI3uiaslg[k] - num2[k];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                };
            }
            {
                k = str1;
                while (k >= 0) {
                    if (vMhHvkFEl5[k] == 0)
                        continue;
                    break;
                    k = k - 1;
                };
            }
            i = i + 1;
            while (k >= 0) {
                cout << vMhHvkFEl5[k];
                k--;
            }
            cout << endl;
        };
    }
    return 0;
}

