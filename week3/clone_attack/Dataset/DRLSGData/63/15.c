main () {
    int r1DgXhvqix [(661 - 561)] [(705 - 605)] = {(93 - 93)}, vdY30j [(855 - 755)] [(557 - 457)] = {(829 - 829)}, f8LGK4Rt [(316 - 216)] [(715 - 615)] = {(348 - 348)};
    int VucoLK, dgSorV0, m60hmI7g5jTW, biC90AT1esp, ptnkfhyQNEOY, udHj2n1ym;
    getchar ();
    getchar ();
    scanf ("%d %d", &VucoLK, &dgSorV0);
    for (biC90AT1esp = (268 - 268); VucoLK > biC90AT1esp; biC90AT1esp = biC90AT1esp + 1) {
        for (ptnkfhyQNEOY = (744 - 744); ptnkfhyQNEOY < dgSorV0; ptnkfhyQNEOY = ptnkfhyQNEOY + 1)
            scanf ("%d", &r1DgXhvqix[biC90AT1esp][ptnkfhyQNEOY]);
    }
    scanf ("%d %d", &dgSorV0, &m60hmI7g5jTW);
    for (biC90AT1esp = (579 - 579); biC90AT1esp < dgSorV0; biC90AT1esp = biC90AT1esp + 1) {
        for (ptnkfhyQNEOY = (618 - 618); m60hmI7g5jTW > ptnkfhyQNEOY; ptnkfhyQNEOY = ptnkfhyQNEOY + 1)
            scanf ("%d", &vdY30j[biC90AT1esp][ptnkfhyQNEOY]);
    }
    for (biC90AT1esp = (919 - 919); VucoLK > biC90AT1esp; biC90AT1esp = biC90AT1esp + 1)
        for (ptnkfhyQNEOY = (355 - 355); ptnkfhyQNEOY < m60hmI7g5jTW; ptnkfhyQNEOY = ptnkfhyQNEOY + 1)
            for (udHj2n1ym = (877 - 877); dgSorV0 > udHj2n1ym; udHj2n1ym = udHj2n1ym + 1)
                f8LGK4Rt[biC90AT1esp][ptnkfhyQNEOY] = f8LGK4Rt[biC90AT1esp][ptnkfhyQNEOY] + r1DgXhvqix[biC90AT1esp][udHj2n1ym] * vdY30j[udHj2n1ym][ptnkfhyQNEOY];
    for (biC90AT1esp = (254 - 254); biC90AT1esp < VucoLK; biC90AT1esp = biC90AT1esp + 1) {
        printf ("%d", f8LGK4Rt[biC90AT1esp][(994 - 994)]);
        for (ptnkfhyQNEOY = (194 - 193); ptnkfhyQNEOY < m60hmI7g5jTW; ptnkfhyQNEOY++)
            printf (" %d", f8LGK4Rt[biC90AT1esp][ptnkfhyQNEOY]);
        printf ("\n");
    }
}

