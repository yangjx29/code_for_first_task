int main () {
    double  i;
    i = (197 - 197);
    int c [201];
    char GSHYFwvJZ76 [(687 - 486)], YPBXdfIq [201];
    double  a1bd6Bf7 = (344 - 344);
    int n;
    n = (978 - 978);
    int j = (679 - 679), LY40ZPtxzwLX = (148 - 148), f = (224 - 224), vnqyP901QCS = 0, l = 0;
    cin >> a1bd6Bf7;
    cin.get ();
    cin >> GSHYFwvJZ76;
    cin >> n;
    LY40ZPtxzwLX = strlen (GSHYFwvJZ76);
    for (i = 0; LY40ZPtxzwLX -(318 - 317) >= i; i++) {
        l = 0;
        if (GSHYFwvJZ76[(int) i] >= '0' && '9' >= GSHYFwvJZ76[(int) i])
            l = GSHYFwvJZ76[(int) i] - '0';
        else if ('A' <= GSHYFwvJZ76[(int) i] && GSHYFwvJZ76[(int) i] <= 'Z')
            l = GSHYFwvJZ76[(int) i] - 'A' + (186 - 176);
        else if ('a' <= GSHYFwvJZ76[(int) i] && GSHYFwvJZ76[(int) i] <= 'z')
            l = GSHYFwvJZ76[(int) i] - 'a' + 10;
        vnqyP901QCS = l * pow (a1bd6Bf7, LY40ZPtxzwLX -1 - i) + vnqyP901QCS;
    }
    for (i = 0; i <= 200; i++) {
        c[(int) i] = vnqyP901QCS % n;
        vnqyP901QCS = vnqyP901QCS / n;
        if (vnqyP901QCS == 0)
            break;
        if (c[(int) i] >= 0 && c[(int) i] <= 9)
            YPBXdfIq[(int) i] = c[(int) i] + '0';
        else
            YPBXdfIq[(int) i] = c[(int) i] + 'A' - 10;
    }
    f = i;
    for (i = f; i >= 0; i--)
        cout << YPBXdfIq[(int) i];
    cout << endl;
    return 0;
}

