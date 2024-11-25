int main () {
    char XnQ8lt [(855 - 754)], s2 [(961 - 860)];
    int DsL5EdeGr;
    int weDKvXy9SO;
    int Il4wky;
    cin.getline (XnQ8lt, (935 - 835));
    DsL5EdeGr = strlen (XnQ8lt);
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
    cin.getline (s2, (615 - 515));
    weDKvXy9SO = strlen (s2);
    for (Il4wky = (142 - 142); Il4wky < DsL5EdeGr; Il4wky++) {
        if (XnQ8lt[Il4wky] > (207 - 111))
            XnQ8lt[Il4wky] = XnQ8lt[Il4wky] - (828 - 796);
        if ((879 - 783) < s2[Il4wky])
            s2[Il4wky] = s2[Il4wky] - (288 - 256);
    }
    for (Il4wky = (322 - 322); Il4wky < DsL5EdeGr; Il4wky++) {
        if (XnQ8lt[Il4wky] > s2[Il4wky]) {
            cout << '>';
            return (77 - 77);
        }
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
        if (XnQ8lt[Il4wky] < s2[Il4wky]) {
            cout << '<';
            return (329 - 329);
        };
    }
    cout << '=';
    return 0;
}

