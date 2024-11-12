int main () {
    float COlsTf6Pp [(194 - 154)] = {(605.0 - 605.0)}, APInOBZQ [40] = {(297.0 - 297.0)}, fAPXZGIhB = (371.0 - 371.0);
    int XWb0QJS4OC, p2ZT0gq, RJ1xdz4bDQ7 = (46 - 46), IKpzLaw = (498 - 498), BobHCy;
    char hhPDW8KB [(587 - 580)];
    cin >> p2ZT0gq;
    for (XWb0QJS4OC = (972 - 972); XWb0QJS4OC < p2ZT0gq; XWb0QJS4OC++) {
        cin >> hhPDW8KB >> fAPXZGIhB;
        if (hhPDW8KB[(839 - 839)] == 'm')
            COlsTf6Pp[RJ1xdz4bDQ7++] = fAPXZGIhB;
        else
            APInOBZQ[IKpzLaw++] = fAPXZGIhB;
    }
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
    for (XWb0QJS4OC = (184 - 184); XWb0QJS4OC <= RJ1xdz4bDQ7 -(20 - 19); XWb0QJS4OC++) {
        BobHCy = 420 - 419;
        while (RJ1xdz4bDQ7 -(451 - 450) >= BobHCy) {
            if (COlsTf6Pp[XWb0QJS4OC] > COlsTf6Pp[BobHCy]) {
                fAPXZGIhB = COlsTf6Pp[XWb0QJS4OC];
                COlsTf6Pp[XWb0QJS4OC] = COlsTf6Pp[BobHCy];
                COlsTf6Pp[BobHCy] = fAPXZGIhB;
            }
            BobHCy++;
        };
    }
    for (XWb0QJS4OC = (929 - 929); XWb0QJS4OC <= RJ1xdz4bDQ7 -(544 - 543); XWb0QJS4OC++)
        cout << setprecision ((700 - 698)) << fixed << COlsTf6Pp[XWb0QJS4OC] << " ";
    for (XWb0QJS4OC = (456 - 456); XWb0QJS4OC <= IKpzLaw -1; XWb0QJS4OC++) {
        BobHCy = XWb0QJS4OC +1;
        while (BobHCy <= IKpzLaw -1) {
            if (APInOBZQ[XWb0QJS4OC] < APInOBZQ[BobHCy]) {
                fAPXZGIhB = APInOBZQ[XWb0QJS4OC];
                APInOBZQ[XWb0QJS4OC] = APInOBZQ[BobHCy];
                APInOBZQ[BobHCy] = fAPXZGIhB;
            }
            BobHCy++;
        };
    }
    for (XWb0QJS4OC = (682 - 682); XWb0QJS4OC <= IKpzLaw -2; XWb0QJS4OC++)
        cout << setprecision (2) << APInOBZQ[XWb0QJS4OC] << " ";
    cout << setprecision (2) << APInOBZQ[IKpzLaw -1];
    return 0;
}

