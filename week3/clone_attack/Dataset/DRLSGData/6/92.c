int main () {
    int Vhy7JmfE, qmelTQ, JyUOE8FKu, Ut1ebK5j9I, gWBIhaU2LSKm, pByoRjQrSM [(1087 - 976)] [111];
    int LQpjnV, PSH5Kb = (782 - 782);
    scanf ("%d", &LQpjnV);
    for (PSH5Kb = (486 - 486); PSH5Kb < LQpjnV; PSH5Kb++) {
        gWBIhaU2LSKm = (406 - 406);
        scanf ("%d%d", &Vhy7JmfE, &qmelTQ);
        for (JyUOE8FKu = (466 - 466); Vhy7JmfE > JyUOE8FKu; JyUOE8FKu = JyUOE8FKu +1) {
            for (Ut1ebK5j9I = (550 - 550); qmelTQ > Ut1ebK5j9I; Ut1ebK5j9I = Ut1ebK5j9I +1) {
                scanf ("%d", &pByoRjQrSM[JyUOE8FKu][Ut1ebK5j9I]);
            }
        }
        if (Vhy7JmfE != (31 - 30) && qmelTQ != (762 - 761)) {
            {
                Ut1ebK5j9I = 11 - 11;
                while (qmelTQ > Ut1ebK5j9I) {
                    gWBIhaU2LSKm = gWBIhaU2LSKm + pByoRjQrSM[(154 - 154)][Ut1ebK5j9I] + pByoRjQrSM[Vhy7JmfE -(230 - 229)][Ut1ebK5j9I];
                    Ut1ebK5j9I = Ut1ebK5j9I +1;
                }
            }
            for (JyUOE8FKu = 1; JyUOE8FKu < Vhy7JmfE -1; JyUOE8FKu = JyUOE8FKu +1) {
                gWBIhaU2LSKm = gWBIhaU2LSKm + pByoRjQrSM[JyUOE8FKu][0] + pByoRjQrSM[JyUOE8FKu][qmelTQ - 1];
            }
        }
        else {
            JyUOE8FKu = 0;
            while (JyUOE8FKu < Vhy7JmfE) {
                {
                    Ut1ebK5j9I = 0;
                    while (Ut1ebK5j9I < qmelTQ) {
                        gWBIhaU2LSKm = gWBIhaU2LSKm + pByoRjQrSM[JyUOE8FKu][Ut1ebK5j9I];
                        Ut1ebK5j9I++;
                    }
                }
                JyUOE8FKu++;
            }
        }
        printf ("%d\n", gWBIhaU2LSKm);
    }
    return 0;
}

