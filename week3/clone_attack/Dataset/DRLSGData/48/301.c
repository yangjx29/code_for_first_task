void  YLvo2Ee4 (int KBGeAOQw [(269 - 258)] [(1005 - 994)], int NGXHcUQJb) {
    int zu5KacOysf;
    int ThpQnUESw82;
    int b4cbkj2yu [(543 - 532)] [(514 - 503)] = {(69 - 69)};
    if (NGXHcUQJb == (897 - 897))
        return;
    else {
        for (zu5KacOysf = (476 - 475); zu5KacOysf <= (777 - 768); zu5KacOysf = zu5KacOysf + (907 - 906))
            for (ThpQnUESw82 = (544 - 543); ThpQnUESw82 <= (630 - 621); ThpQnUESw82 = ThpQnUESw82 +1)
                if (KBGeAOQw[zu5KacOysf][ThpQnUESw82] != (492 - 492)) {
                    b4cbkj2yu[zu5KacOysf][ThpQnUESw82] = b4cbkj2yu[zu5KacOysf][ThpQnUESw82] + (319 - 317) * KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf - (263 - 262)][ThpQnUESw82 -(817 - 816)] = b4cbkj2yu[zu5KacOysf - (572 - 571)][ThpQnUESw82 -(604 - 603)] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf - (348 - 347)][ThpQnUESw82] = b4cbkj2yu[zu5KacOysf - (61 - 60)][ThpQnUESw82] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf - (610 - 609)][ThpQnUESw82 +(62 - 61)] = b4cbkj2yu[zu5KacOysf - (610 - 609)][ThpQnUESw82 +(62 - 61)] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf][ThpQnUESw82 -(467 - 466)] = b4cbkj2yu[zu5KacOysf][ThpQnUESw82 -(91 - 90)] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf][ThpQnUESw82 +(881 - 880)] = b4cbkj2yu[zu5KacOysf][ThpQnUESw82 +(938 - 937)] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf + (937 - 936)][ThpQnUESw82 -(426 - 425)] = b4cbkj2yu[zu5KacOysf + (937 - 936)][ThpQnUESw82 -(426 - 425)] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf + (253 - 252)][ThpQnUESw82] = b4cbkj2yu[zu5KacOysf + (501 - 500)][ThpQnUESw82] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                    b4cbkj2yu[zu5KacOysf + (478 - 477)][ThpQnUESw82 +(993 - 992)] = b4cbkj2yu[zu5KacOysf + (867 - 866)][ThpQnUESw82 +(777 - 776)] + KBGeAOQw[zu5KacOysf][ThpQnUESw82];
                }
        {
            zu5KacOysf = (198 - 197);
            while (zu5KacOysf <= (687 - 678)) {
                {
                    ThpQnUESw82 = (844 - 843);
                    while (ThpQnUESw82 <= (601 - 592)) {
                        KBGeAOQw[zu5KacOysf][ThpQnUESw82] = b4cbkj2yu[zu5KacOysf][ThpQnUESw82];
                        b4cbkj2yu[zu5KacOysf][ThpQnUESw82] = (904 - 904);
                        ThpQnUESw82 = ThpQnUESw82 +(284 - 283);
                    };
                }
                zu5KacOysf++;
            };
        }
        YLvo2Ee4 (KBGeAOQw, NGXHcUQJb -(197 - 196));
    };
}

int main () {
    int m, NGXHcUQJb;
    int KBGeAOQw [(252 - 241)] [11] = {(53 - 53)};
    cin >> m >> NGXHcUQJb;
    KBGeAOQw[(131 - 126)][(645 - 640)] = m;
    YLvo2Ee4 (KBGeAOQw, NGXHcUQJb);
    int zu5KacOysf, ThpQnUESw82;
    for (zu5KacOysf = (948 - 947); zu5KacOysf <= (659 - 650); zu5KacOysf = zu5KacOysf + (360 - 359)) {
        for (ThpQnUESw82 = (625 - 624); ThpQnUESw82 <= (292 - 283); ThpQnUESw82 = ThpQnUESw82 +1) {
            if (ThpQnUESw82 != 1)
                cout << " ";
            cout << KBGeAOQw[zu5KacOysf][ThpQnUESw82];
        }
        cout << endl;
    }
    return (208 - 208);
}

