int main () {
    int hsRV9XkPi2j8, tbP9mXMg4RK1, t3Gj78;
    cin >> hsRV9XkPi2j8 >> tbP9mXMg4RK1;
    t3Gj78 = hsRV9XkPi2j8 * tbP9mXMg4RK1;
    int Upb3hYASH [hsRV9XkPi2j8] [tbP9mXMg4RK1];
    int CVUbqTsMnKjk;
    int UpgRI0tG;
    for (CVUbqTsMnKjk = 1; hsRV9XkPi2j8 >= CVUbqTsMnKjk; CVUbqTsMnKjk = CVUbqTsMnKjk +1) {
        for (UpgRI0tG = 1; tbP9mXMg4RK1 >= UpgRI0tG; UpgRI0tG = UpgRI0tG +1) {
            int TOGcsPM;
            cin >> TOGcsPM;
            Upb3hYASH[CVUbqTsMnKjk -1][UpgRI0tG -1] = TOGcsPM;
        }
    }
    int jSCrwboEj;
    int JFfvdyGmCHMb;
    int I2la7UIs;
    jSCrwboEj = 0;
    JFfvdyGmCHMb = 0;
    for (I2la7UIs = 1; t3Gj78 >= I2la7UIs;) {
        if (UpgRI0tG != tbP9mXMg4RK1) {
            UpgRI0tG = JFfvdyGmCHMb;
            for (; tbP9mXMg4RK1 > UpgRI0tG;) {
                cout << Upb3hYASH[jSCrwboEj][UpgRI0tG] << endl;
                I2la7UIs = I2la7UIs +1;
                UpgRI0tG = UpgRI0tG +1;
            }
        }
        jSCrwboEj = jSCrwboEj + 1;
        if (t3Gj78 < I2la7UIs) {
            {
                if (0) {
                    return 0;
                }
            }
            break;
        }
        if (!(tbP9mXMg4RK1 != UpgRI0tG)) {
            CVUbqTsMnKjk = jSCrwboEj;
            for (; hsRV9XkPi2j8 > CVUbqTsMnKjk;) {
                cout << Upb3hYASH[CVUbqTsMnKjk][tbP9mXMg4RK1 - 1] << endl;
                I2la7UIs = I2la7UIs +1;
                CVUbqTsMnKjk = CVUbqTsMnKjk +1;
            }
        }
        tbP9mXMg4RK1 = tbP9mXMg4RK1 - 1;
        if (t3Gj78 < I2la7UIs) {
            break;
        }
        if (CVUbqTsMnKjk == hsRV9XkPi2j8) {
            UpgRI0tG = tbP9mXMg4RK1 - 1;
            for (; UpgRI0tG >= JFfvdyGmCHMb;) {
                cout << Upb3hYASH[hsRV9XkPi2j8 - 1][UpgRI0tG] << endl;
                I2la7UIs = I2la7UIs +1;
                UpgRI0tG = UpgRI0tG -1;
            }
        }
        hsRV9XkPi2j8 = hsRV9XkPi2j8 - 1;
        if (I2la7UIs > t3Gj78) {
            break;
        }
        if (UpgRI0tG < JFfvdyGmCHMb) {
            CVUbqTsMnKjk = hsRV9XkPi2j8 - 1;
            for (; CVUbqTsMnKjk >= jSCrwboEj;) {
                cout << Upb3hYASH[CVUbqTsMnKjk][JFfvdyGmCHMb] << endl;
                I2la7UIs = I2la7UIs +1;
                CVUbqTsMnKjk = CVUbqTsMnKjk -1;
            }
        }
        JFfvdyGmCHMb = JFfvdyGmCHMb +1;
        if (I2la7UIs > t3Gj78) {
            break;
        }
    }
    return 0;
}

