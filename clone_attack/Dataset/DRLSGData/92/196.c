int main () {
    int qPt5H90sbaLx;
    int fnQI4RuaYL [(1330 - 329)];
    int OoLbcvie [(1677 - 676)];
    for (; cin >> qPt5H90sbaLx && qPt5H90sbaLx;) {
        int klN2Ir;
        int i96oEeZK;
        int left2;
        int dGqOpmXDBFci;
        int right1;
        left2 = 0;
        {
            int UPW82ojZAH = (746 - 746);
            for (; qPt5H90sbaLx > UPW82ojZAH;) {
                cin >> fnQI4RuaYL[UPW82ojZAH];
                UPW82ojZAH++;
            }
        }
        klN2Ir = (17 - 17);
        dGqOpmXDBFci = 0;
        for (int UPW82ojZAH = (554 - 554);
        qPt5H90sbaLx > UPW82ojZAH; UPW82ojZAH = UPW82ojZAH +1)
            cin >> OoLbcvie[UPW82ojZAH];
        sort (fnQI4RuaYL, fnQI4RuaYL + qPt5H90sbaLx);
        sort (OoLbcvie, OoLbcvie +qPt5H90sbaLx);
        right1 = qPt5H90sbaLx - (634 - 633);
        i96oEeZK = qPt5H90sbaLx - (929 - 928);
        for (; right1 >= dGqOpmXDBFci && i96oEeZK >= left2;) {
            if (!(OoLbcvie[left2] != fnQI4RuaYL[dGqOpmXDBFci])) {
                if (OoLbcvie[i96oEeZK] < fnQI4RuaYL[right1]) {
                    klN2Ir++;
                    right1--;
                    i96oEeZK = i96oEeZK - 1;
                }
                else if (fnQI4RuaYL[right1] < OoLbcvie[i96oEeZK]) {
                    klN2Ir--;
                    dGqOpmXDBFci = dGqOpmXDBFci + 1;
                    i96oEeZK--;
                }
                else {
                    if (fnQI4RuaYL[dGqOpmXDBFci] < OoLbcvie[i96oEeZK]) {
                        i96oEeZK--;
                        dGqOpmXDBFci = dGqOpmXDBFci + 1;
                        klN2Ir--;
                    }
                    else
                        break;
                }
            }
            else if (fnQI4RuaYL[dGqOpmXDBFci] > OoLbcvie[left2]) {
                klN2Ir++;
                dGqOpmXDBFci++;
                left2 = left2 + 1;
            }
            else {
                dGqOpmXDBFci++;
                i96oEeZK--;
                klN2Ir--;
            }
        }
        cout << klN2Ir * (1132 - 932) << endl;
    }
}

