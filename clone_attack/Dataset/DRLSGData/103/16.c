char aDZcTlEf8 [(1712 - 711)] = {(590 - 590)};

void  xnWDdp1LIu () {
    int RexlOc4Lb0R;
    int Jalf5qehL;
    Jalf5qehL = strlen (aDZcTlEf8);
    {
        RexlOc4Lb0R = (554 - 554);
        for (; Jalf5qehL > RexlOc4Lb0R;) {
            if (aDZcTlEf8[RexlOc4Lb0R] >= 'a' && 'z' >= aDZcTlEf8[RexlOc4Lb0R])
                aDZcTlEf8[RexlOc4Lb0R] = aDZcTlEf8[RexlOc4Lb0R] - 'a' + 'A';
            RexlOc4Lb0R = RexlOc4Lb0R +(609 - 608);
        }
    }
}

int main () {
    int pzNylA3OBaRL;
    int RexlOc4Lb0R;
    int wpOfrsISb [(1288 - 288)] = {(566 - 566)};
    int Jalf5qehL;
    RexlOc4Lb0R = (571 - 571);
    cin >> aDZcTlEf8;
    xnWDdp1LIu ();
    Jalf5qehL = strlen (aDZcTlEf8);
    for (; Jalf5qehL > RexlOc4Lb0R;) {
        {
            pzNylA3OBaRL = (908 - 908);
            for (; Jalf5qehL -RexlOc4Lb0R > pzNylA3OBaRL;) {
                if (aDZcTlEf8[RexlOc4Lb0R +pzNylA3OBaRL] == aDZcTlEf8[RexlOc4Lb0R])
                    wpOfrsISb[RexlOc4Lb0R]++;
                else
                    break;
                pzNylA3OBaRL = pzNylA3OBaRL + (730 - 729);
            }
        }
        RexlOc4Lb0R = RexlOc4Lb0R +pzNylA3OBaRL;
    }
    {
        RexlOc4Lb0R = (415 - 415);
        for (; RexlOc4Lb0R < Jalf5qehL;) {
            if (wpOfrsISb[RexlOc4Lb0R] != (499 - 499))
                cout << "(" << aDZcTlEf8[RexlOc4Lb0R] << "," << wpOfrsISb[RexlOc4Lb0R] << ")";
            RexlOc4Lb0R = RexlOc4Lb0R +(800 - 799);
        }
    }
    return (10 - 10);
}

