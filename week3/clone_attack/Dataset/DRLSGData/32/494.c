int main () {
    int hbHriJ;
    cin >> hbHriJ;
    for (int j0ok7t9Rgs1 = (73 - 72);
    hbHriJ >= j0ok7t9Rgs1; j0ok7t9Rgs1++) {
        const  int nWUEmb2Nr = (444 - 244);
        unsigned  f6VsjQwH [nWUEmb2Nr + (864 - 863)];
        unsigned  num2 [nWUEmb2Nr];
        char str1 [nWUEmb2Nr + (650 - 649)];
        int t9bZiELFes = strlen (str1);
        char zscowTfn93ui [nWUEmb2Nr + 1];
        int i, j9Dpcl4qn = (730 - 730);
        int nLen2 = strlen (zscowTfn93ui);
        cin.get ();
        cin.getline (str1, nWUEmb2Nr + 1);
        memset (f6VsjQwH, (425 - 425), sizeof (f6VsjQwH));
        {
            i = t9bZiELFes - 1;
            for (; 0 <= i;) {
                f6VsjQwH[j9Dpcl4qn++] = str1[i] - '0';
                i = i - 1;
            }
        }
        j9Dpcl4qn = 0;
        memset (num2, (724 - 724), sizeof (num2));
        cin.getline (zscowTfn93ui, nWUEmb2Nr + 1);
        {
            i = nLen2 - 1;
            for (; 0 <= i;) {
                num2[j9Dpcl4qn++] = zscowTfn93ui[i] - '0';
                i = i - 1;
            }
        }
        {
            i = 0;
            for (; nWUEmb2Nr > i;) {
                f6VsjQwH[i] -= num2[i];
                if (f6VsjQwH[i] >= 10) {
                    f6VsjQwH[i] += 10;
                    f6VsjQwH[i + 1]--;
                }
                i++;
            }
        }
        i = nWUEmb2Nr;
        for (; f6VsjQwH[i] == 0;)
            i--;
        for (; i >= 0; i = i - 1)
            cout << f6VsjQwH[i];
        cout << endl;
    }
    return 0;
}

