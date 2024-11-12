int By4Uqj [200] [200];

int main () {
    int vUHPVK;
    cin >> vUHPVK;
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
    {
        int i = 0;
        while (i < vUHPVK) {
            int pMqX3NE0K;
            pMqX3NE0K = 0;
            i++;
            for (int tKsjhifecB = 0;
            vUHPVK > tKsjhifecB; tKsjhifecB++) {
                int ubNiPq;
                ubNiPq = 0;
                while (vUHPVK > ubNiPq) {
                    cin >> By4Uqj[tKsjhifecB][ubNiPq];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ubNiPq++;
                };
            }
            {
                int aXQJ3WIv2 = 1;
                while (vUHPVK > aXQJ3WIv2) {
                    {
                        int tKsjhifecB = 0;
                        while (tKsjhifecB < vUHPVK) {
                            int minn = By4Uqj[tKsjhifecB][0];
                            {
                                int ubNiPq = aXQJ3WIv2;
                                while (ubNiPq < vUHPVK) {
                                    if (By4Uqj[tKsjhifecB][ubNiPq] < minn)
                                        minn = By4Uqj[tKsjhifecB][ubNiPq];
                                    ubNiPq++;
                                };
                            }
                            By4Uqj[tKsjhifecB][0] = By4Uqj[tKsjhifecB][0] - minn;
                            {
                                int ubNiPq = aXQJ3WIv2;
                                while (ubNiPq < vUHPVK) {
                                    By4Uqj[tKsjhifecB][ubNiPq] = By4Uqj[tKsjhifecB][ubNiPq] - minn;
                                    ubNiPq++;
                                };
                            }
                            tKsjhifecB++;
                        };
                    }
                    {
                        int ubNiPq = 0;
                        while (ubNiPq < vUHPVK) {
                            int minn = By4Uqj[0][ubNiPq];
                            {
                                int tKsjhifecB = aXQJ3WIv2;
                                while (tKsjhifecB < vUHPVK) {
                                    if (By4Uqj[tKsjhifecB][ubNiPq] < minn)
                                        minn = By4Uqj[tKsjhifecB][ubNiPq];
                                    tKsjhifecB++;
                                };
                            }
                            By4Uqj[0][ubNiPq] -= minn;
                            {
                                int tKsjhifecB = aXQJ3WIv2;
                                while (tKsjhifecB < vUHPVK) {
                                    By4Uqj[tKsjhifecB][ubNiPq] -= minn;
                                    tKsjhifecB++;
                                };
                            }
                            ubNiPq++;
                        };
                    }
                    pMqX3NE0K = pMqX3NE0K + By4Uqj[aXQJ3WIv2][aXQJ3WIv2];
                    aXQJ3WIv2++;
                };
            }
            cout << pMqX3NE0K << endl;
        };
    }
    return 0;
}

