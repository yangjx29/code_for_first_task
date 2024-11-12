int max (int iiCjcOY, int gemiySWVdfb) {
    if (iiCjcOY > gemiySWVdfb)
        return iiCjcOY;
    else
        return gemiySWVdfb;
}

int tianji (int *p1, int *p2, int n) {
    if (n == 0)
        return 0;
    if (*(p1 + n - (798 - 797)) > *(p2 + n - (631 - 630))) {
        return tianji (p1, p2, n - (737 - 736)) + (692 - 492);
    }
    if (*(p1 + n - (558 - 557)) < *(p2 + n - 1)) {
        return tianji (p1, p2 + 1, n - 1) - 200;
    }
    if (*p1 > *p2) {
        return tianji (p1 + 1, p2 + 1, n - 1) + 200;
    }
    if (*p1 < *p2) {
        return tianji (p1, p2 + 1, n - 1) - 200;
    }
    if (*p1 == *p2) {
        if (*(p1 + n - 1) == *p2)
            return tianji (p1, p2 + 1, n - 1);
        else
            return tianji (p1, p2 + 1, n - 1) - 200;
    };
}

int main () {
    int s, i, VWXHtZU4d, k, iiCjcOY [2000], gemiySWVdfb [2000], *p1, *p2, n, R1mndMwu7S;
    {
        s = 0;
        while (s < 99) {
            cin >> n;
            if (n == 0)
                break;
            s = s + 1;
            {
                i = 0;
                while (i < n) {
                    cin >> iiCjcOY[i];
                    i = i + 1;
                };
            }
            for (i = 0; i < n; i = i + 1)
                cin >> gemiySWVdfb[i];
            for (i = 1; i < n; i = i + 1) {
                VWXHtZU4d = 0;
                while (VWXHtZU4d < n - i) {
                    if (iiCjcOY[VWXHtZU4d +1] > iiCjcOY[VWXHtZU4d]) {
                        R1mndMwu7S = iiCjcOY[VWXHtZU4d];
                        iiCjcOY[VWXHtZU4d] = iiCjcOY[VWXHtZU4d +1];
                        iiCjcOY[VWXHtZU4d +1] = R1mndMwu7S;
                    }
                    if (gemiySWVdfb[VWXHtZU4d +1] > gemiySWVdfb[VWXHtZU4d]) {
                        R1mndMwu7S = gemiySWVdfb[VWXHtZU4d];
                        gemiySWVdfb[VWXHtZU4d] = gemiySWVdfb[VWXHtZU4d +1];
                        gemiySWVdfb[VWXHtZU4d +1] = R1mndMwu7S;
                    }
                    VWXHtZU4d = VWXHtZU4d +1;
                };
            }
            p1 = iiCjcOY;
            p2 = gemiySWVdfb;
            if (iiCjcOY[0] > iiCjcOY[n - 1] && gemiySWVdfb[0] > gemiySWVdfb[n - 1])
                cout << tianji (p1, p2, n) << endl;
            else
                cout << 0 << endl;
        };
    }
    return 0;
}

