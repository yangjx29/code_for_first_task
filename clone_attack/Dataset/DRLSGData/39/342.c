struct   student {
    char XrjKGB [20];
    int nsSTym4;
    int JxenVANd7;
    char idoit0vAReyj;
    char Whny0L;
    int VTorGa2BR5L;
    int TdCJspY9RFwr;
}
eEoJBF1R7g0e [100];

int main () {
    int ok2QBl;
    int lC0Vyul2;
    int vYes2j3E5A;
    scanf ("%d", &vYes2j3E5A);
    lC0Vyul2 = 0;
    {
        ok2QBl = 0;
        for (; ok2QBl < vYes2j3E5A;) {
            scanf ("%s", eEoJBF1R7g0e[ok2QBl].XrjKGB);
            scanf ("%d%d %c %c%d", &eEoJBF1R7g0e[ok2QBl].nsSTym4, &eEoJBF1R7g0e[ok2QBl].JxenVANd7, &eEoJBF1R7g0e[ok2QBl].idoit0vAReyj, &eEoJBF1R7g0e[ok2QBl].Whny0L, &eEoJBF1R7g0e[ok2QBl].VTorGa2BR5L);
            eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr = 0;
            if (eEoJBF1R7g0e[ok2QBl].nsSTym4 > 80 && 1 <= eEoJBF1R7g0e[ok2QBl].VTorGa2BR5L)
                eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr += 8000;
            if (85 < eEoJBF1R7g0e[ok2QBl].nsSTym4 && 80 < eEoJBF1R7g0e[ok2QBl].JxenVANd7)
                eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr += 4000;
            if (eEoJBF1R7g0e[ok2QBl].nsSTym4 > (457 - 367))
                eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr += 2000;
            if (85 < eEoJBF1R7g0e[ok2QBl].nsSTym4 && !('Y' != eEoJBF1R7g0e[ok2QBl].Whny0L))
                eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr += 1000;
            if (eEoJBF1R7g0e[ok2QBl].JxenVANd7 > 80 && eEoJBF1R7g0e[ok2QBl].idoit0vAReyj == 'Y')
                eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr += 850;
            lC0Vyul2 += eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr;
            ok2QBl++;
        }
    }
    {
        ok2QBl = 1;
        for (; ok2QBl < vYes2j3E5A;) {
            if (eEoJBF1R7g0e[ok2QBl].TdCJspY9RFwr > eEoJBF1R7g0e[0].TdCJspY9RFwr)
                eEoJBF1R7g0e[0] = eEoJBF1R7g0e[ok2QBl];
            ok2QBl++;
        }
    }
    printf ("%s\n", eEoJBF1R7g0e[0].XrjKGB);
    printf ("%d\n", eEoJBF1R7g0e[0].TdCJspY9RFwr);
    printf ("%d", lC0Vyul2);
    return 0;
}

