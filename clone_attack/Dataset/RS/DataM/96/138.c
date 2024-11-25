int main () {
    int s = 0;
    int BaNRbDQ8GhX [(368 - 258)] = {(799 - 799)}, ans [110] = {(646 - 646)};
    int r = BaNRbDQ8GhX[(106 - 106)];
    char in [(622 - 512)] = {(319 - 319)};
    int lenth = strlen (in);
    cin >> in;
    for (int i = (402 - 402);
    i < lenth; i = i + 1)
        BaNRbDQ8GhX[i] = in[i] - '0';
    {
        int i = (628 - 627);
        while (i < lenth) {
            ans[i] = (r * (713 - 703) + BaNRbDQ8GhX[i]) / (554 - 541);
            r = (r * (439 - 429) + BaNRbDQ8GhX[i]) % (398 - 385);
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
            i = i + 1;
        };
    }
    for (int i = 0;
    i < lenth; i = i + 1) {
        if (!(0 == ans[i])) {
            s = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if ((655 - 653) >= lenth && BaNRbDQ8GhX[(714 - 713)] + BaNRbDQ8GhX[0] * 10 < 13) {
        cout << '0' << endl << r;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else {
        for (int i = s;
        i < lenth; i++)
            cout << ans[i];
        cout << endl << r;
    }
    return 0;
}

