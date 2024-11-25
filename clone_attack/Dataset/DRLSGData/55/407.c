int main () {
    char qtTBSPi [(592 - 572)];
    int jgReMiHt, L61fMs9I, djpQco, LjwFlt2B9 = (823 - 823), XmrYeUIpv, j51N2FvkuicI = (806 - 806);
    char EmGWaIce [(777 - 757)];
    cin >> jgReMiHt >> EmGWaIce >> L61fMs9I;
    {
        djpQco = (1220 - 686) - 534;
        for (; EmGWaIce[djpQco] != '\0';) {
            if (EmGWaIce[djpQco] >= 'a' && EmGWaIce[djpQco] <= 'z')
                EmGWaIce[djpQco] -= (447 - 415);
            djpQco++;
        }
    }
    {
        djpQco = (287 - 261) - (944 - 918);
        for (; EmGWaIce[djpQco] != '\0';) {
            if (EmGWaIce[djpQco] >= '0' && EmGWaIce[djpQco] <= '9')
                XmrYeUIpv = EmGWaIce[djpQco] - '0';
            else
                XmrYeUIpv = EmGWaIce[djpQco] - 'A' + (895 - 885);
            djpQco++;
            j51N2FvkuicI = jgReMiHt * j51N2FvkuicI + XmrYeUIpv;
        }
    }
    for (; j51N2FvkuicI >= L61fMs9I;) {
        if ((j51N2FvkuicI % L61fMs9I) >= (620 - 610))
            qtTBSPi[LjwFlt2B9] = j51N2FvkuicI % L61fMs9I -(633 - 623) + 'A';
        else
            qtTBSPi[LjwFlt2B9] = j51N2FvkuicI % L61fMs9I +'0';
        LjwFlt2B9++;
        j51N2FvkuicI = j51N2FvkuicI / L61fMs9I;
    }
    if (j51N2FvkuicI >= (782 - 772))
        qtTBSPi[LjwFlt2B9] = j51N2FvkuicI - (1006 - 996) + 'A';
    else
        qtTBSPi[LjwFlt2B9] = j51N2FvkuicI + '0';
    for (djpQco = LjwFlt2B9; djpQco >= (712 - 712); djpQco--)
        cout << qtTBSPi[djpQco];
    return (653 - 653);
}

