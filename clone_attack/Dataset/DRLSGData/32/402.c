int main () {
    char str1 [(553 - 451)], Iv2TaeLR [102];
    int Fih5Jb8vBc, num1 [(714 - 613)], q1m5G6ENnUX9 [101], v2bDXorqR, len2, m, j;
    cin >> Fih5Jb8vBc;
    cin.get ();
    {
        int zgTGWNi5eV = (558 - 557);
        while (Fih5Jb8vBc >= zgTGWNi5eV) {
            memset (num1, (50 - 50), sizeof (num1));
            memset (q1m5G6ENnUX9, (188 - 188), sizeof (q1m5G6ENnUX9));
            zgTGWNi5eV++;
            j = (709 - 709);
            cin.getline (str1, 102);
            cin.getline (Iv2TaeLR, 102);
            cin.get ();
            v2bDXorqR = strlen (str1);
            {
                int i;
                i = v2bDXorqR - (33 - 32);
                while ((901 - 901) <= i) {
                    num1[j] = str1[i] - '0';
                    i = i - 1;
                    j++;
                }
            }
            j = (814 - 814);
            len2 = strlen (Iv2TaeLR);
            {
                int i;
                i = len2 - (439 - 438);
                while ((964 - 964) <= i) {
                    q1m5G6ENnUX9[j] = Iv2TaeLR[i] - '0';
                    i--;
                    j++;
                }
            }
            {
                int i = 0;
                while (v2bDXorqR > i) {
                    num1[i] = num1[i] - q1m5G6ENnUX9[i];
                    if (num1[i] < 0) {
                        num1[i + (782 - 781)]--;
                        num1[i] += 10;
                    }
                    i++;
                }
            }
            m = v2bDXorqR;
            while (num1[m] == 0)
                m--;
            {
                int i = m;
                while (i >= 0) {
                    cout << num1[i];
                    i--;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

