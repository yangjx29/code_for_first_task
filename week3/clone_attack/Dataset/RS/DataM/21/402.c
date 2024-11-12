int main () {
    int n, rh0vNOKr, num_min = (577 - 576), V5i7vLKGztR = 1;
    float XcDaTvibGj = -10000, O8nLlgrE = 10000, vAXGIiSnyPLr [(520 - 219)], SA0I8D = 0, Oe2yABSc0WC;
    cin >> n;
    {
        rh0vNOKr = 1;
        while (rh0vNOKr <= n) {
            cin >> vAXGIiSnyPLr[rh0vNOKr];
            if (XcDaTvibGj < vAXGIiSnyPLr[rh0vNOKr]) {
                XcDaTvibGj = vAXGIiSnyPLr[rh0vNOKr];
                V5i7vLKGztR = 1;
            }
            else {
                if (vAXGIiSnyPLr[rh0vNOKr] == XcDaTvibGj) {
                    V5i7vLKGztR++;
                };
            }
            if (O8nLlgrE > vAXGIiSnyPLr[rh0vNOKr]) {
                O8nLlgrE = vAXGIiSnyPLr[rh0vNOKr];
                num_min = 1;
            }
            else {
                if (O8nLlgrE == vAXGIiSnyPLr[rh0vNOKr]) {
                    num_min++;
                };
            }
            SA0I8D += vAXGIiSnyPLr[rh0vNOKr];
            rh0vNOKr++;
        };
    }
    Oe2yABSc0WC = SA0I8D / n;
    if (!((XcDaTvibGj +O8nLlgrE) / 2 != Oe2yABSc0WC)) {
        {
            int t = 1;
            while (t <= num_min) {
                t = t + 1;
                cout << O8nLlgrE << ",";
            };
        }
        {
            int t = 1;
            while (t < V5i7vLKGztR) {
                t++;
                cout << XcDaTvibGj << ",";
            };
        }
        cout << XcDaTvibGj;
    }
    else if (Oe2yABSc0WC < (XcDaTvibGj +O8nLlgrE) / 2) {
        {
            int t = 1;
            while (t < V5i7vLKGztR) {
                t++;
                cout << XcDaTvibGj << ",";
            };
        }
        cout << XcDaTvibGj;
    }
    else if (Oe2yABSc0WC > (XcDaTvibGj +O8nLlgrE) / 2) {
        {
            int t = 1;
            while (t < num_min) {
                t++;
                cout << O8nLlgrE << ",";
            };
        }
        cout << O8nLlgrE;
    }
    return 0;
}

