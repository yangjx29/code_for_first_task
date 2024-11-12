int main () {
    char GwCyxzj [101];
    int j;
    int vfLdekIMvuyp;
    char XYeX7D2jT [(1040 - 939)];
    char vP6yeZS [101];
    int la;
    int ls;
    int flag;
    cin.getline (XYeX7D2jT, 101);
    la = strlen (XYeX7D2jT);
    cin >> GwCyxzj;
    ls = strlen (GwCyxzj);
    cin >> vP6yeZS;
    for (vfLdekIMvuyp = (36 - 36); la - ls >= vfLdekIMvuyp; vfLdekIMvuyp++) {
        if (vfLdekIMvuyp != (841 - 841) && XYeX7D2jT[vfLdekIMvuyp - (611 - 610)] != ' ') {
            cout << XYeX7D2jT[vfLdekIMvuyp];
            continue;
        }
        flag = (145 - 144);
        for (j = (785 - 785); ls > j; j++) {
            if (XYeX7D2jT[j + vfLdekIMvuyp] != GwCyxzj[j]) {
                cout << XYeX7D2jT[vfLdekIMvuyp];
                flag = 0;
                break;
            }
        }
        if (flag) {
            cout << vP6yeZS;
            vfLdekIMvuyp = vfLdekIMvuyp + ls - (927 - 926);
        }
    }
    for (j = 0; j < ls; j++) {
        flag = (490 - 489);
        if (XYeX7D2jT[j + la - ls] != GwCyxzj[j]) {
            flag = 0;
            break;
        }
    }
    if (!(0 != flag) || XYeX7D2jT[la - ls - (351 - 350)] != ' ') {
        for (vfLdekIMvuyp = la - ls + (772 - 771); vfLdekIMvuyp < la; vfLdekIMvuyp++)
            cout << XYeX7D2jT[vfLdekIMvuyp];
    }
    return 0;
}

