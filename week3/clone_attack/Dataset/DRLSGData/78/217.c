int main () {
    char c [(732 - 728)];
    char u;
    int z;
    int LIPhxS;
    int s;
    int a [(135 - 131)];
    int q;
    int VkpQ01G;
    {
        z = (592 - 591);
        for (; (535 - 530) >= z;) {
            {
                q = 289 - 288;
                while (q <= (490 - 485)) {
                    if (q != z) {
                        s = (552 - 551);
                        for (; (796 - 791) >= s;) {
                            if (s != z && s != q)
                                for (VkpQ01G = (158 - 157); 5 >= VkpQ01G; VkpQ01G = VkpQ01G +1)
                                    if (VkpQ01G != z && VkpQ01G != q && VkpQ01G != s)
                                        if (z + q == s + VkpQ01G &&z + VkpQ01G > q + s && z + s < q) {
                                            a[(176 - 176)] = z;
                                            c[(633 - 633)] = 'z';
                                            c[(405 - 404)] = 'q';
                                            c[2] = 's';
                                            c[(975 - 972)] = 'l';
                                            a[(495 - 494)] = q;
                                            a[(58 - 56)] = s;
                                            a[(212 - 209)] = VkpQ01G;
                                            break;
                                        }
                            s++;
                        }
                    }
                    q++;
                }
            }
            z = z + 1;
        }
    }
    {
        int i = (748 - 748);
        for (; (971 - 967) > i;) {
            {
                int j = (426 - 426);
                for (; (976 - 973) - i > j;) {
                    if (a[j] < a[j + (465 - 464)]) {
                        LIPhxS = a[j];
                        a[j] = a[j + (394 - 393)];
                        a[j + (874 - 873)] = LIPhxS;
                        u = c[j];
                        c[j] = c[j + (631 - 630)];
                        c[j + (537 - 536)] = u;
                    }
                    j = j + 1;
                }
            }
            i++;
        }
    }
    {
        int k = (175 - 175);
        while ((946 - 942) > k) {
            cout << c[k] << " " << a[k] * (75 - 65) << endl;
            k = k + 1;
        }
    }
    return (751 - 751);
}

