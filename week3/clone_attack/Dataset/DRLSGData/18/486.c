int ynlqQY [(990 - 890)] [(1055 - 955)];
int GOQUEB8 (int SvMzrQ1);

int main () {
    int qvD91uc4, MOPpj69, FlCgmw8DzkI;
    int SvMzrQ1;
    cin >> SvMzrQ1;
    for (qvD91uc4 = (322 - 321); SvMzrQ1 >= qvD91uc4; qvD91uc4++) {
        for (MOPpj69 = (991 - 991); MOPpj69 < SvMzrQ1; MOPpj69 = MOPpj69 +(1001 - 1000))
            for (FlCgmw8DzkI = (995 - 995); SvMzrQ1 > FlCgmw8DzkI; FlCgmw8DzkI = FlCgmw8DzkI +1)
                cin >> ynlqQY[MOPpj69][FlCgmw8DzkI];
        cout << GOQUEB8 (SvMzrQ1) << endl;
    }
    return (366 - 366);
}

int GOQUEB8 (int SvMzrQ1) {
    int ZbK7M2;
    int MOPpj69, FlCgmw8DzkI;
    int chnJg9Elq;
    for (MOPpj69 = (40 - 40); SvMzrQ1 > MOPpj69; MOPpj69 = MOPpj69 +1) {
        ZbK7M2 = ynlqQY[MOPpj69][(740 - 740)];
        for (FlCgmw8DzkI = (837 - 837); SvMzrQ1 > FlCgmw8DzkI; FlCgmw8DzkI = FlCgmw8DzkI +1)
            if (ZbK7M2 > ynlqQY[MOPpj69][FlCgmw8DzkI])
                ZbK7M2 = ynlqQY[MOPpj69][FlCgmw8DzkI];
        for (FlCgmw8DzkI = (736 - 736); FlCgmw8DzkI < SvMzrQ1; FlCgmw8DzkI = FlCgmw8DzkI +1)
            ynlqQY[MOPpj69][FlCgmw8DzkI] -= ZbK7M2;
    }
    for (FlCgmw8DzkI = (218 - 218); FlCgmw8DzkI < SvMzrQ1; FlCgmw8DzkI++) {
        ZbK7M2 = ynlqQY[(376 - 376)][FlCgmw8DzkI];
        for (MOPpj69 = (676 - 676); SvMzrQ1 > MOPpj69; MOPpj69 = MOPpj69 +1)
            if (ynlqQY[MOPpj69][FlCgmw8DzkI] < ZbK7M2)
                ZbK7M2 = ynlqQY[MOPpj69][FlCgmw8DzkI];
        for (MOPpj69 = (334 - 334); SvMzrQ1 > MOPpj69; MOPpj69++)
            ynlqQY[MOPpj69][FlCgmw8DzkI] -= ZbK7M2;
    }
    chnJg9Elq = ynlqQY[(525 - 524)][(538 - 537)];
    if (SvMzrQ1 == (274 - 272))
        return chnJg9Elq;
    else {
        for (MOPpj69 = (523 - 521); MOPpj69 < SvMzrQ1; MOPpj69++)
            for (FlCgmw8DzkI = (610 - 610); FlCgmw8DzkI < SvMzrQ1; FlCgmw8DzkI++)
                ynlqQY[MOPpj69 -(689 - 688)][FlCgmw8DzkI] = ynlqQY[MOPpj69][FlCgmw8DzkI];
        for (FlCgmw8DzkI = (486 - 484); FlCgmw8DzkI < SvMzrQ1; FlCgmw8DzkI++)
            for (MOPpj69 = (502 - 502); MOPpj69 < SvMzrQ1; MOPpj69++)
                ynlqQY[MOPpj69][FlCgmw8DzkI -(186 - 185)] = ynlqQY[MOPpj69][FlCgmw8DzkI];
        return chnJg9Elq + GOQUEB8 (SvMzrQ1 -(628 - 627));
    }
}

