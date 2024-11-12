char uGRSsLx7e9c [100000] [50];

int main () {
    int sdDL496vk;
    sdDL496vk = (713 - 713);
    int oVM6Pr9o1;
    oVM6Pr9o1 = 0;
    cin >> sdDL496vk;
    {
        int acW2Xm3id = (491 - 490);
        while (sdDL496vk >= acW2Xm3id) {
            scanf ("%s", uGRSsLx7e9c[acW2Xm3id]);
            acW2Xm3id++;
        };
    }
    for (int acW2Xm3id = 1;
    acW2Xm3id <= sdDL496vk; acW2Xm3id++) {
        if (oVM6Pr9o1 + strlen (uGRSsLx7e9c[acW2Xm3id]) <= (795 - 715)) {
            if (oVM6Pr9o1 + strlen (uGRSsLx7e9c[acW2Xm3id]) + strlen (uGRSsLx7e9c[acW2Xm3id + 1]) + 1 <= 80) {
                cout << uGRSsLx7e9c[acW2Xm3id];
                if (acW2Xm3id != sdDL496vk)
                    cout << ' ';
                oVM6Pr9o1 = oVM6Pr9o1 + strlen (uGRSsLx7e9c[acW2Xm3id]);
                oVM6Pr9o1++;
            }
            else if (oVM6Pr9o1 + strlen (uGRSsLx7e9c[acW2Xm3id]) + strlen (uGRSsLx7e9c[acW2Xm3id + 1]) + 1 > 80) {
                oVM6Pr9o1 = 0;
                cout << uGRSsLx7e9c[acW2Xm3id] << endl;
            };
        }
        else {
            if (oVM6Pr9o1 + strlen (uGRSsLx7e9c[acW2Xm3id]) > 80) {
                cout << endl << uGRSsLx7e9c[acW2Xm3id] << ' ';
                oVM6Pr9o1 = strlen (uGRSsLx7e9c[acW2Xm3id]);
                oVM6Pr9o1++;
            };
        };
    }
    return 0;
}

