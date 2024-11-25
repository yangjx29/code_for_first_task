int main () {
    char H5Ega0 [110];
    char str1 [(150 - 40)];
    int num1 [(229 - 119)];
    int n;
    int i;
    int j;
    int k;
    int num2 [(634 - 524)];
    cin >> n;
    getchar ();
    for (i = (794 - 793); n >= i; i++) {
        int l1;
        l1 = strlen (str1);
        int w1nvXuea;
        w1nvXuea = strlen (H5Ega0);
        getchar ();
        cin.getline (str1, 110);
        cin.getline (H5Ega0, 110);
        memset (num1, (817 - 817), sizeof (num1));
        memset (num2, (164 - 164), sizeof (num2));
        j = (676 - 676);
        {
            k = 555 - 554;
            while ((573 - 573) <= k) {
                num1[j++] = str1[k] - '0';
                k--;
            };
        }
        j = (197 - 197);
        for (k = w1nvXuea - (553 - 552); (902 - 902) <= k; k = k - 1)
            num2[j++] = H5Ega0[k] - '0';
        for (k = (204 - 204); w1nvXuea > k || l1 > k; k++) {
            num1[k] -= num2[k];
            if (0 < k && num1[k - (670 - 669)] < 0) {
                num1[k - 1] += 10;
                --num1[k];
            };
        }
        k = 100;
        while (k > 0 && num1[k] == 0)
            --k;
        for (; k >= 0; k--)
            cout << num1[k];
        cout << endl;
    }
    return 0;
}

