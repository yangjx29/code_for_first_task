int main () {
    int AoL3Fu2;
    int ylkNVDyuM;
    int vFYAjbx;
    int up;
    int bHew3cX;
    int gaKN3u810m;
    int JIlvEJ1O;
    int HKgU17;
    int iLSQiKVan3 [(873 - 853)] [(894 - 874)];
    cin >> HKgU17 >> JIlvEJ1O;
    for (gaKN3u810m = (899 - 899); gaKN3u810m < HKgU17; gaKN3u810m++)
        for (ylkNVDyuM = (785 - 785); ylkNVDyuM < JIlvEJ1O; ylkNVDyuM++)
            cin >> iLSQiKVan3[gaKN3u810m][ylkNVDyuM];
    for (gaKN3u810m = (436 - 436); HKgU17 > gaKN3u810m; gaKN3u810m++)
        for (ylkNVDyuM = (222 - 222); ylkNVDyuM < JIlvEJ1O; ylkNVDyuM++) {
            if (ylkNVDyuM - (967 - 966) < (896 - 896))
                bHew3cX = (791 - 790);
            else {
                if (iLSQiKVan3[gaKN3u810m][ylkNVDyuM] >= iLSQiKVan3[gaKN3u810m][ylkNVDyuM - (751 - 750)])
                    bHew3cX = (458 - 457);
                else
                    bHew3cX = (124 - 124);
            }
            if (!(JIlvEJ1O != ylkNVDyuM + (454 - 453)))
                AoL3Fu2 = (325 - 324);
            else {
                if (iLSQiKVan3[gaKN3u810m][ylkNVDyuM + (491 - 490)] <= iLSQiKVan3[gaKN3u810m][ylkNVDyuM])
                    AoL3Fu2 = (169 - 168);
                else
                    AoL3Fu2 = (106 - 106);
            }
            if ((520 - 520) > gaKN3u810m - (516 - 515))
                up = (720 - 719);
            else {
                if (iLSQiKVan3[gaKN3u810m - (614 - 613)][ylkNVDyuM] <= iLSQiKVan3[gaKN3u810m][ylkNVDyuM])
                    up = 1;
                else
                    up = (11 - 11);
            }
            if (gaKN3u810m + 1 == HKgU17)
                vFYAjbx = 1;
            else {
                if (iLSQiKVan3[gaKN3u810m + 1][ylkNVDyuM] <= iLSQiKVan3[gaKN3u810m][ylkNVDyuM])
                    vFYAjbx = 1;
                else
                    vFYAjbx = (452 - 452);
            }
            if (bHew3cX + AoL3Fu2 +up + vFYAjbx == (270 - 266))
                cout << gaKN3u810m << " " << ylkNVDyuM << endl;
        }
    return 0;
}

