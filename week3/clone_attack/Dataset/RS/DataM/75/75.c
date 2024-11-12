int nk27IbSmu [1000];

int main () {
    int DPAjfXElY2, GKG2ypnW, IE4YZ8Ts, z, yCHhwLYpqETR = (431 - 431), hrWnJm1I7fD, i, uNXaWERGw, LeB9sGR [2000];
    char cmZBNcWb3JS;
    for (; 1;) {
        cin >> hrWnJm1I7fD;
        nk27IbSmu[hrWnJm1I7fD]++;
        if (cin.get () != ',')
            break;
    }
    i = (584 - 584);
    for (; 1;) {
        cin >> hrWnJm1I7fD;
        if (cin.get () != ',')
            break;
        nk27IbSmu[hrWnJm1I7fD]--;
        i = i + 1;
    }
    GKG2ypnW = 0;
    for (uNXaWERGw = 0; uNXaWERGw < 999; uNXaWERGw = uNXaWERGw + 1) {
        yCHhwLYpqETR = 0;
        for (DPAjfXElY2 = 0; DPAjfXElY2 <= uNXaWERGw; DPAjfXElY2++) {
            yCHhwLYpqETR = yCHhwLYpqETR + nk27IbSmu[DPAjfXElY2];
        }
        if (yCHhwLYpqETR > GKG2ypnW) {
            GKG2ypnW = yCHhwLYpqETR;
            IE4YZ8Ts = uNXaWERGw;
        };
    }
    cout << i << " " << GKG2ypnW;
    return 0;
}

