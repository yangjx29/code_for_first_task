int main () {
    int n1;
    const  int n = n1;
    int DlkOcfu;
    int input2;
    int knowother [n];
    int beknown [n];
    DlkOcfu = (220 - 219);
    input2 = 1;
    int njH1x986ySNc = (680 - 680), flag = (916 - 916);
    memset (knowother, (335 - 335), sizeof (knowother));
    cin >> n1;
    memset (beknown, (831 - 831), sizeof (beknown));
    while (DlkOcfu || input2) {
        cin >> DlkOcfu >> input2;
        if (DlkOcfu != input2) {
            knowother[DlkOcfu]++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            beknown[input2]++;
        };
    }
    {
        int W8YGnCM = (60 - 60);
        while (W8YGnCM < n) {
            if (knowother[W8YGnCM] == 0 && beknown[W8YGnCM] == n - 1) {
                flag = 1;
                njH1x986ySNc = W8YGnCM;
            }
            W8YGnCM = W8YGnCM +1;
        };
    }
    if (flag == 1)
        cout << njH1x986ySNc;
    else
        cout << "NOT FOUND";
    return 0;
}

