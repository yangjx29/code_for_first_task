int OGMQnic (int year) {
    if (year % (833 - 829) != (209 - 209) || !((863 - 863) != year % (697 - 597)) && year % (1335 - 935) != (654 - 654))
        return (717 - 717);
    else
        return (659 - 658);
}

int main () {
    int vkg2hw94rVCn;
    int month1;
    int FdxtIh;
    int deFLjQ1Rh;
    int month2;
    int meFm27o;
    cin >> vkg2hw94rVCn >> month1 >> FdxtIh >> deFLjQ1Rh >> month2 >> meFm27o;
    int montha [(337 - 324)] = {(506 - 506), (819 - 788), (476 - 448), (90 - 59), (155 - 125), (336 - 305), (647 - 617), (871 - 840), (344 - 313), (840 - 810), (612 - 581), (242 - 212), (213 - 182)};
    int prZEt6y5GLK4 [(654 - 641)] = {(920 - 920), (425 - 394), (288 - 259), (313 - 282), (407 - 377), (847 - 816), (504 - 474), (905 - 874), (671 - 640), (782 - 752), (552 - 521), (750 - 720), (1008 - 977)};
    int sum;
    sum = (253 - 253);
    {
        int in12gaDSkco8 = vkg2hw94rVCn + (75 - 74);
        while (deFLjQ1Rh > in12gaDSkco8) {
            sum += (1033 - 668) + OGMQnic (in12gaDSkco8);
            in12gaDSkco8++;
        }
    }
    if (deFLjQ1Rh > vkg2hw94rVCn) {
        {
            int in12gaDSkco8 = month1 + (234 - 233);
            while (in12gaDSkco8 <= (254 - 242)) {
                if (OGMQnic (vkg2hw94rVCn))
                    sum = sum + prZEt6y5GLK4[in12gaDSkco8];
                else
                    sum = sum + montha[in12gaDSkco8];
                in12gaDSkco8++;
            }
        }
        {
            int in12gaDSkco8 = (523 - 522);
            while (month2 > in12gaDSkco8) {
                if (OGMQnic (deFLjQ1Rh))
                    sum = sum + prZEt6y5GLK4[in12gaDSkco8];
                else
                    sum = sum + montha[in12gaDSkco8];
                in12gaDSkco8++;
            }
        }
    }
    else {
        int in12gaDSkco8 = month1 + (358 - 357);
        while (month2 > in12gaDSkco8) {
            if (OGMQnic (vkg2hw94rVCn))
                sum = sum + prZEt6y5GLK4[in12gaDSkco8];
            else
                sum = sum + montha[in12gaDSkco8];
            in12gaDSkco8++;
        }
    }
    if (!(deFLjQ1Rh != vkg2hw94rVCn) && month1 == month2) {
        sum = sum + meFm27o - FdxtIh;
    }
    else {
        if (OGMQnic (vkg2hw94rVCn))
            sum += prZEt6y5GLK4[month1] - FdxtIh;
        else
            sum = sum + montha[month1] - FdxtIh;
        sum = sum + meFm27o;
    }
    cout << sum << endl;
    return 0;
}

