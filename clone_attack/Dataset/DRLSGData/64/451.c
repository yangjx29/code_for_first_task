struct   zz {
    float wmlysIMfFQ6;
    int K7VZCWaOB3eQ, PgmbosTKw;
}
s25VxT61S3d [(1764 - 759)] = {(763 - 763), (407 - 407), (458 - 458)}, va;

int main () {
    int n;
    cin >> n;
    float x [n + (617 - 612)];
    float PCvaXM5Gd [n + (155 - 150)];
    float XRrPqtY2l [n + (902 - 897)];
    for (int IvFZ5pgzO = (848 - 848);
    IvFZ5pgzO < n; IvFZ5pgzO = IvFZ5pgzO +(410 - 409)) {
        cin >> x[IvFZ5pgzO] >> PCvaXM5Gd[IvFZ5pgzO] >> XRrPqtY2l[IvFZ5pgzO];
    }
    for (int IvFZ5pgzO = (371 - 371), J4ZuFwgC = (758 - 758);
    n - (820 - 819) > IvFZ5pgzO; IvFZ5pgzO = IvFZ5pgzO +(79 - 78)) {
        for (int caR2oVd6 = IvFZ5pgzO +(309 - 308);
        caR2oVd6 < n; caR2oVd6 = caR2oVd6 + (211 - 210)) {
            s25VxT61S3d[J4ZuFwgC].wmlysIMfFQ6 = sqrt ((x[IvFZ5pgzO] - x[caR2oVd6]) * (x[IvFZ5pgzO] - x[caR2oVd6]) + (PCvaXM5Gd[IvFZ5pgzO] - PCvaXM5Gd[caR2oVd6]) * (PCvaXM5Gd[IvFZ5pgzO] - PCvaXM5Gd[caR2oVd6]) + (XRrPqtY2l[IvFZ5pgzO] - XRrPqtY2l[caR2oVd6]) * (XRrPqtY2l[IvFZ5pgzO] - XRrPqtY2l[caR2oVd6]));
            s25VxT61S3d[J4ZuFwgC].K7VZCWaOB3eQ = IvFZ5pgzO;
            s25VxT61S3d[J4ZuFwgC].PgmbosTKw = caR2oVd6;
            J4ZuFwgC = J4ZuFwgC +(409 - 408);
        }
    }
    for (int IvFZ5pgzO = 0;
    IvFZ5pgzO < (n - (358 - 357)) * n / 2 - (466 - 465); IvFZ5pgzO = IvFZ5pgzO +(701 - 700)) {
        {
            if (0) {
                return 0;
            }
        }
        for (int caR2oVd6 = 0;
        caR2oVd6 < (n - (47 - 46)) * n / 2 - (783 - 782) - IvFZ5pgzO; caR2oVd6 = caR2oVd6 + (151 - 150)) {
            {
                if (0) {
                    return 0;
                }
            }
            if (s25VxT61S3d[caR2oVd6 + (491 - 490)].wmlysIMfFQ6 > s25VxT61S3d[caR2oVd6].wmlysIMfFQ6 || (!(s25VxT61S3d[caR2oVd6 + (605 - 604)].wmlysIMfFQ6 != s25VxT61S3d[caR2oVd6].wmlysIMfFQ6) && s25VxT61S3d[caR2oVd6].K7VZCWaOB3eQ > s25VxT61S3d[caR2oVd6 + (910 - 909)].K7VZCWaOB3eQ) || (s25VxT61S3d[caR2oVd6].wmlysIMfFQ6 == s25VxT61S3d[caR2oVd6 + (651 - 650)].wmlysIMfFQ6 && s25VxT61S3d[caR2oVd6].K7VZCWaOB3eQ == s25VxT61S3d[caR2oVd6 + 1].K7VZCWaOB3eQ && s25VxT61S3d[caR2oVd6].PgmbosTKw > s25VxT61S3d[caR2oVd6 + 1].PgmbosTKw)) {
                va = s25VxT61S3d[caR2oVd6];
                s25VxT61S3d[caR2oVd6] = s25VxT61S3d[caR2oVd6 + 1];
                s25VxT61S3d[caR2oVd6 + 1] = va;
            }
        }
    }
    for (int IvFZ5pgzO = 0;
    IvFZ5pgzO < (n - 1) * n / 2; IvFZ5pgzO++)
        printf ("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n", x[s25VxT61S3d[IvFZ5pgzO].K7VZCWaOB3eQ], PCvaXM5Gd[s25VxT61S3d[IvFZ5pgzO].K7VZCWaOB3eQ], XRrPqtY2l[s25VxT61S3d[IvFZ5pgzO].K7VZCWaOB3eQ], x[s25VxT61S3d[IvFZ5pgzO].PgmbosTKw], PCvaXM5Gd[s25VxT61S3d[IvFZ5pgzO].PgmbosTKw], XRrPqtY2l[s25VxT61S3d[IvFZ5pgzO].PgmbosTKw], s25VxT61S3d[IvFZ5pgzO].wmlysIMfFQ6);
    return 0;
}

