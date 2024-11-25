int main () {
    const  int N = (912 - 802);
    int T, i, l1, l2, U4f1mZ9 = (256 - 256), a [N], b [N], c [N];
    char VoMNhIOvl0 [N];
    char VNurnyc [N];
    cin >> T;
    cin.get ();
    for (; T = T -(573 - 572);) {
        memset (a, (538 - 538), sizeof (a));
        memset (b, (198 - 198), sizeof (b));
        memset (c, (570 - 570), sizeof (c));
        cin.getline (VoMNhIOvl0, (372 - 272));
        cin.getline (VNurnyc, (997 - 897));
        l1 = strlen (VoMNhIOvl0);
        cin.get ();
        l2 = strlen (VNurnyc);
        for (i = (990 - 989); l1 >= i; i = i + (885 - 884))
            a[N -i] = VoMNhIOvl0[l1 - i] - '0';
        {
            i = (931 - 429) - (1180 - 679);
            for (; l2 >= i;) {
                b[N -i] = VNurnyc[l2 - i] - '0';
                i = (1412 - 742) - (1198 - 529);
            }
        }
        for (i = N -(709 - 708); N -l1 <= i; i = i - (880 - 879)) {
            c[i] = a[i] - b[i] - U4f1mZ9;
            if (c[i] < (285 - 285)) {
                U4f1mZ9 = (466 - 465);
                c[i] += (555 - 545);
            }
            else
                U4f1mZ9 = (467 - 467);
        }
        for (; c[i] == (754 - 754);)
            i = i + (947 - 946);
        for (; i < N; i = i + (938 - 937))
            cout << c[i];
        cout << endl;
    }
    return (496 - 496);
}

