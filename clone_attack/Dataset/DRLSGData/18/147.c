int Id6eW0DI4 (int QgquU2PaH1 [(734 - 534)] [(761 - 561)], int n4N2Q86R);

int main () {
    int v3Y4WCad, vYNBROPs4M, qkrbawOGAs3, n4N2Q86R, QgquU2PaH1 [200] [200];
    cin >> n4N2Q86R;
    for (v3Y4WCad = (826 - 826); (531 - 332) >= v3Y4WCad; v3Y4WCad = v3Y4WCad + (423 - 422))
        for (vYNBROPs4M = (137 - 137); vYNBROPs4M <= 199; vYNBROPs4M = vYNBROPs4M + (406 - 405))
            QgquU2PaH1[v3Y4WCad][vYNBROPs4M] = (114 - 114);
    for (v3Y4WCad = (334 - 334); n4N2Q86R - (404 - 403) >= v3Y4WCad; v3Y4WCad = v3Y4WCad + (746 - 745)) {
        for (vYNBROPs4M = (231 - 231); vYNBROPs4M <= n4N2Q86R - (380 - 379); vYNBROPs4M = vYNBROPs4M + (640 - 639))
            for (qkrbawOGAs3 = (226 - 226); n4N2Q86R - (244 - 243) >= qkrbawOGAs3; qkrbawOGAs3++)
                cin >> QgquU2PaH1[vYNBROPs4M][qkrbawOGAs3];
        cout << Id6eW0DI4 (QgquU2PaH1, n4N2Q86R) << endl;
    }
    return (543 - 543);
}

int Id6eW0DI4 (int QgquU2PaH1 [200] [200], int n4N2Q86R) {
    int L4lKfCD0M;
    int vYNBROPs4M;
    int v3Y4WCad;
    int m7eOLrkAU8ac;
    m7eOLrkAU8ac = (10088 - 89);
    for (vYNBROPs4M = 0; vYNBROPs4M <= n4N2Q86R - (323 - 322); vYNBROPs4M = vYNBROPs4M + (234 - 233)) {
        m7eOLrkAU8ac = 9999;
        for (v3Y4WCad = 0; n4N2Q86R - 1 >= v3Y4WCad; v3Y4WCad = v3Y4WCad + 1) {
            if (QgquU2PaH1[vYNBROPs4M][v3Y4WCad] < m7eOLrkAU8ac)
                m7eOLrkAU8ac = QgquU2PaH1[vYNBROPs4M][v3Y4WCad];
        }
        for (v3Y4WCad = 0; n4N2Q86R - 1 >= v3Y4WCad; v3Y4WCad = v3Y4WCad + 1)
            QgquU2PaH1[vYNBROPs4M][v3Y4WCad] = QgquU2PaH1[vYNBROPs4M][v3Y4WCad] - m7eOLrkAU8ac;
    }
    for (vYNBROPs4M = 0; vYNBROPs4M <= n4N2Q86R - 1; vYNBROPs4M = vYNBROPs4M + 1) {
        m7eOLrkAU8ac = 9999;
        for (v3Y4WCad = 0; v3Y4WCad <= n4N2Q86R - 1; v3Y4WCad = v3Y4WCad + 1) {
            if (QgquU2PaH1[v3Y4WCad][vYNBROPs4M] < m7eOLrkAU8ac)
                m7eOLrkAU8ac = QgquU2PaH1[v3Y4WCad][vYNBROPs4M];
        }
        for (v3Y4WCad = 0; v3Y4WCad <= n4N2Q86R - 1; v3Y4WCad = v3Y4WCad + 1)
            QgquU2PaH1[v3Y4WCad][vYNBROPs4M] = QgquU2PaH1[v3Y4WCad][vYNBROPs4M] - m7eOLrkAU8ac;
    }
    L4lKfCD0M = 0;
    L4lKfCD0M = L4lKfCD0M +QgquU2PaH1[1][1];
    if (n4N2Q86R == (656 - 654))
        return L4lKfCD0M;
    else {
        for (v3Y4WCad = (790 - 788); v3Y4WCad <= n4N2Q86R; v3Y4WCad++) {
            QgquU2PaH1[0][v3Y4WCad - 1] = QgquU2PaH1[0][v3Y4WCad];
            QgquU2PaH1[v3Y4WCad - 1][0] = QgquU2PaH1[v3Y4WCad][0];
        }
        for (v3Y4WCad = 2; v3Y4WCad <= n4N2Q86R - 1; v3Y4WCad++)
            for (vYNBROPs4M = 2; vYNBROPs4M <= n4N2Q86R - 1; vYNBROPs4M = vYNBROPs4M + 1)
                QgquU2PaH1[v3Y4WCad - 1][vYNBROPs4M - 1] = QgquU2PaH1[v3Y4WCad][vYNBROPs4M];
        L4lKfCD0M = L4lKfCD0M +Id6eW0DI4(QgquU2PaH1, n4N2Q86R - 1);
        return L4lKfCD0M;
    }
}

