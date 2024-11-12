int main () {
    int mon [(635 - 623)] = {(790 - 759), (207 - 179), 31, (350 - 320), 31, (96 - 66), 31, 31, 30, 31, 30, 31};
    int CD4AIBHRs2 [12] = {0};
    int YOyD50lg7;
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
    {
        int JcMUIQ96 = (51 - 50);
        while (JcMUIQ96 < 12) {
            CD4AIBHRs2[JcMUIQ96] = CD4AIBHRs2[JcMUIQ96 -1] + mon[JcMUIQ96 -1];
            JcMUIQ96 = JcMUIQ96 +1;
        };
    }
    cin >> YOyD50lg7;
    {
        int ptAxK6Y0j1 = 0;
        while (ptAxK6Y0j1 < 12) {
            if ((CD4AIBHRs2[ptAxK6Y0j1] + 13 - 1) % 7 + YOyD50lg7 == 5 || (CD4AIBHRs2[ptAxK6Y0j1] + 13 - 1) % 7 + YOyD50lg7 == 12) {
                cout << ptAxK6Y0j1 + 1 << endl;
            }
            ptAxK6Y0j1 = ptAxK6Y0j1 + 1;
        };
    }
    return 0;
}

