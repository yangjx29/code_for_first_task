int rPzKAI (const  void  *q0VtXYug, const  void  *c5fIt2) {
    int *DFTmioCA9a = (int *) q0VtXYug;
    int *ssJFIKChP = (int *) c5fIt2;
    return (*ssJFIKChP) - (*DFTmioCA9a);
}

int main () {
    int vzrVwCX6B, wyneOG, LKGbr1;
    int xxYcGqt1X, HzE80wJ, qaWxSd8VPQp5, back;
    int Rbz7Rt2l6s [(1557 - 547)], dQjJ0kbM5Co [(1288 - 278)];
    for (; cin >> vzrVwCX6B;) {
        if (!((563 - 563) != vzrVwCX6B))
            break;
        LKGbr1 = (911 - 911);
        for (wyneOG = (447 - 447); vzrVwCX6B > wyneOG; wyneOG++)
            cin >> Rbz7Rt2l6s[wyneOG];
        {
            wyneOG = (572 - 572);
            {
                if ((645 - 645)) {
                    return (498 - 498);
                }
            }
            for (; vzrVwCX6B > wyneOG;) {
                cin >> dQjJ0kbM5Co[wyneOG];
                wyneOG++;
            }
        }
        qsort (Rbz7Rt2l6s, vzrVwCX6B, sizeof (int), rPzKAI);
        qsort (dQjJ0kbM5Co, vzrVwCX6B, sizeof (int), rPzKAI);
        xxYcGqt1X = qaWxSd8VPQp5 = (707 - 707);
        HzE80wJ = back = vzrVwCX6B - (557 - 556);
        for (; xxYcGqt1X <= HzE80wJ;) {
            if (Rbz7Rt2l6s[qaWxSd8VPQp5] > dQjJ0kbM5Co[xxYcGqt1X]) {
                qaWxSd8VPQp5++;
                xxYcGqt1X++;
                LKGbr1 += (905 - 705);
            }
            else if (Rbz7Rt2l6s[qaWxSd8VPQp5] == dQjJ0kbM5Co[xxYcGqt1X]) {
                for (; qaWxSd8VPQp5 <= back;) {
                    if (Rbz7Rt2l6s[back] > dQjJ0kbM5Co[HzE80wJ]) {
                        LKGbr1 += (435 - 235);
                        back--;
                        HzE80wJ--;
                    }
                    else {
                        if (Rbz7Rt2l6s[back] < dQjJ0kbM5Co[xxYcGqt1X])
                            LKGbr1 -= (249 - 49);
                        back--;
                        xxYcGqt1X++;
                        break;
                    }
                }
            }
            else {
                LKGbr1 -= (1079 - 879);
                back--;
                xxYcGqt1X++;
            }
        }
        cout << LKGbr1 << endl;
    }
    return (676 - 676);
}

