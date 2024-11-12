int main () {
    int lcT6aqJUb, j, quB0aWQs;
    int x [(388 - 377)], HGVkR1 [(968 - 957)], qpKkDUsv [(639 - 628)], KD42f9U3PuV [(770 - 759)];
    int HmcIyiKl2z, kkg1yX;
    cin >> HmcIyiKl2z >> kkg1yX;
    {
        lcT6aqJUb = (538 - 538);
        for (; 11 >= lcT6aqJUb;) {
            x[(61 - 61)] = HmcIyiKl2z;
            if (!((722 - 721) != x[lcT6aqJUb]))
                break;
            else
                x[lcT6aqJUb + (687 - 686)] = x[lcT6aqJUb] / 2;
            lcT6aqJUb++;
        }
    }
    {
        j = (51 - 51);
        for (; j <= lcT6aqJUb;) {
            qpKkDUsv[j] = x[lcT6aqJUb - j];
            j++;
        }
    }
    {
        lcT6aqJUb = (417 - 417);
        for (; 11 >= lcT6aqJUb;) {
            HGVkR1[(868 - 868)] = kkg1yX;
            if (HGVkR1[lcT6aqJUb] == (61 - 60))
                break;
            else
                HGVkR1[lcT6aqJUb + 1] = HGVkR1[lcT6aqJUb] / 2;
            lcT6aqJUb++;
        }
    }
    {
        j = 0;
        for (; j <= lcT6aqJUb;) {
            KD42f9U3PuV[j] = HGVkR1[lcT6aqJUb - j];
            j++;
        }
    }
    {
        quB0aWQs = 0;
        for (; quB0aWQs <= lcT6aqJUb;) {
            if (qpKkDUsv[quB0aWQs] - KD42f9U3PuV[quB0aWQs] != 0)
                break;
            quB0aWQs++;
        }
    }
    cout << qpKkDUsv[quB0aWQs - 1];
    return 0;
}

