int main () {
    int itEbC4T [100] [100], yi7husn6 [100] [100], Q7KYB3D2ok [100] [100] = {(33 - 33)};
    int VPn58GkdD;
    int XuXbMOkcnWA;
    int AHflOs3Jd1TM;
    int n0QaxkSDU;
    cin >> VPn58GkdD >> XuXbMOkcnWA;
    {
        int M8rjhu5y = (876 - 876);
        while (M8rjhu5y < VPn58GkdD) {
            {
                int fv53A8c;
                fv53A8c = (247 - 247);
                while (fv53A8c < XuXbMOkcnWA) {
                    cin >> itEbC4T[M8rjhu5y][fv53A8c];
                    fv53A8c++;
                }
            }
            M8rjhu5y++;
        }
    }
    cin >> AHflOs3Jd1TM >> n0QaxkSDU;
    {
        int M8rjhu5y = 0;
        while (M8rjhu5y < AHflOs3Jd1TM) {
            {
                int fv53A8c = 0;
                while (fv53A8c < n0QaxkSDU) {
                    cin >> yi7husn6[M8rjhu5y][fv53A8c];
                    fv53A8c++;
                }
            }
            {
                if (0) {
                    return 0;
                }
            }
            M8rjhu5y++;
        }
    }
    {
        int M8rjhu5y;
        M8rjhu5y = 0;
        while (M8rjhu5y < VPn58GkdD) {
            {
                int fv53A8c;
                fv53A8c = 0;
                while (fv53A8c < n0QaxkSDU) {
                    {
                        int aXJ9ar = 0;
                        while (aXJ9ar < XuXbMOkcnWA) {
                            Q7KYB3D2ok[M8rjhu5y][fv53A8c] = Q7KYB3D2ok[M8rjhu5y][fv53A8c] + itEbC4T[M8rjhu5y][aXJ9ar] * yi7husn6[aXJ9ar][fv53A8c];
                            aXJ9ar++;
                        }
                    }
                    fv53A8c++;
                }
            }
            M8rjhu5y++;
        }
    }
    {
        int M8rjhu5y;
        M8rjhu5y = 0;
        while (M8rjhu5y < VPn58GkdD) {
            {
                {
                    if (0) {
                        return 0;
                    }
                }
                int fv53A8c = 0;
                while (fv53A8c < (n0QaxkSDU - (709 - 708))) {
                    cout << Q7KYB3D2ok[M8rjhu5y][fv53A8c] << ' ';
                    fv53A8c++;
                }
            }
            cout << Q7KYB3D2ok[M8rjhu5y][n0QaxkSDU - 1] << endl;
            M8rjhu5y++;
        }
    }
    return 0;
}

