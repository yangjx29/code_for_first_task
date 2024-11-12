int main () {
    int k;
    int rHxWsAV [20000];
    int Z1VFUe0Q2jxl;
    int fR2HmvMgYk0r;
    int h;
    k = (657 - 657);
    int nO8Y0fuXP;
    cin >> nO8Y0fuXP;
    {
        Z1VFUe0Q2jxl = 658 - 658;
        while (nO8Y0fuXP > Z1VFUe0Q2jxl) {
            cin >> rHxWsAV[Z1VFUe0Q2jxl];
            Z1VFUe0Q2jxl = Z1VFUe0Q2jxl +1;
        };
    }
    {
        Z1VFUe0Q2jxl = 0;
        while (Z1VFUe0Q2jxl < nO8Y0fuXP) {
            {
                fR2HmvMgYk0r = 103 - 102;
                while (fR2HmvMgYk0r < nO8Y0fuXP - k) {
                    if (rHxWsAV[Z1VFUe0Q2jxl] == rHxWsAV[fR2HmvMgYk0r]) {
                        {
                            h = fR2HmvMgYk0r;
                            while (h < nO8Y0fuXP - k - 1) {
                                rHxWsAV[h] = rHxWsAV[h + 1];
                                h++;
                            };
                        }
                        fR2HmvMgYk0r--;
                        k = k + 1;
                    }
                    fR2HmvMgYk0r = fR2HmvMgYk0r + 1;
                };
            }
            Z1VFUe0Q2jxl++;
        };
    }
    {
        Z1VFUe0Q2jxl = 0;
        while (Z1VFUe0Q2jxl < nO8Y0fuXP - k - 1) {
            cout << rHxWsAV[Z1VFUe0Q2jxl] << ' ';
            Z1VFUe0Q2jxl++;
        };
    }
    cout << rHxWsAV[nO8Y0fuXP - k - 1];
    return 0;
}

