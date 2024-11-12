int main () {
    int *Kjvo0JZM8E;
    int tDC4Lu;
    int DVq6MDzLZ0p5;
    int p4GXylZ26Q;
    int H5R0MvY;
    int NIAMyOC [H5R0MvY];
    char evI6pAO [H5R0MvY] [40];
    char (*EVxAa2ukHemG) [40];
    int jgPxOitBSXh;
    jgPxOitBSXh = 0;
    p4GXylZ26Q = 0;
    EVxAa2ukHemG = evI6pAO;
    cin >> H5R0MvY;
    for (tDC4Lu = 0; tDC4Lu <= H5R0MvY -(627 - 626); tDC4Lu = tDC4Lu + 1)
        cin >> *(EVxAa2ukHemG +tDC4Lu);
    for (tDC4Lu = 0; tDC4Lu <= H5R0MvY -1; tDC4Lu = tDC4Lu + 1)
        *(Kjvo0JZM8E +tDC4Lu) = strlen (evI6pAO[tDC4Lu]);
    EVxAa2ukHemG = evI6pAO;
    Kjvo0JZM8E = NIAMyOC;
    Kjvo0JZM8E = NIAMyOC;
    for (tDC4Lu = 0; tDC4Lu < H5R0MvY; tDC4Lu = tDC4Lu + 1) {
        p4GXylZ26Q = p4GXylZ26Q + Kjvo0JZM8E[tDC4Lu] + 1;
        if (p4GXylZ26Q > 81) {
            for (DVq6MDzLZ0p5 = jgPxOitBSXh; DVq6MDzLZ0p5 < tDC4Lu - 1; DVq6MDzLZ0p5 = DVq6MDzLZ0p5 +1)
                cout << *(EVxAa2ukHemG +DVq6MDzLZ0p5) << " ";
            jgPxOitBSXh = tDC4Lu;
            tDC4Lu = tDC4Lu - 1;
            cout << *(EVxAa2ukHemG +DVq6MDzLZ0p5) << endl;
            p4GXylZ26Q = 0;
        }
        else {
            if (tDC4Lu == H5R0MvY -1) {
                for (DVq6MDzLZ0p5 = jgPxOitBSXh; DVq6MDzLZ0p5 < tDC4Lu; DVq6MDzLZ0p5++)
                    cout << *(EVxAa2ukHemG +DVq6MDzLZ0p5) << " ";
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cout << *(EVxAa2ukHemG +DVq6MDzLZ0p5) << endl;
            };
        };
    }
    return 0;
}

