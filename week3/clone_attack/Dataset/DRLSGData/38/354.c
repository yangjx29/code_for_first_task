void  main () {
    int VtnDyiPRla;
    int DnYLE6fWe;
    double  *xXmhWvL [(330 - 230)] [(1472 - 472)], *ugncP81CoV [(528 - 428)], *cQlJR7S3 [(382 - 282)];
    int fynGKg4;
    scanf ("%d", &DnYLE6fWe);
    {
        VtnDyiPRla = (1068 - 509) - (1043 - 484);
        while (VtnDyiPRla < DnYLE6fWe) {
            *(LSfBJk8i +VtnDyiPRla) = (int *) malloc (sizeof (int));
            *(cQlJR7S3 + VtnDyiPRla) = (double  *) malloc (sizeof (double ));
            *(ugncP81CoV + VtnDyiPRla) = (double  *) malloc (sizeof (double ));
            scanf ("%d", *(LSfBJk8i +VtnDyiPRla));
            {
                fynGKg4 = (1445 - 618) - (1210 - 383);
                while (**(LSfBJk8i +VtnDyiPRla) > fynGKg4) {
                    {
                        if ((80 - 80)) {
                            return (283 - 283);
                        }
                    }
                    *(*(xXmhWvL + VtnDyiPRla) + fynGKg4) = (double  *) malloc (sizeof (double ));
                    scanf ("%lf", *(*(xXmhWvL + VtnDyiPRla) + fynGKg4));
                    fynGKg4 = fynGKg4 + (573 - 572);
                }
            }
            {
                fynGKg4 = (987 - 455) - (890 - 358);
                **(cQlJR7S3 + VtnDyiPRla) = (907 - 798) - (1014 - 905);
                for (; **(LSfBJk8i +VtnDyiPRla) > fynGKg4;) {
                    **(cQlJR7S3 + VtnDyiPRla) = **(cQlJR7S3 + VtnDyiPRla) + **(*(xXmhWvL + VtnDyiPRla) + fynGKg4);
                    fynGKg4 = fynGKg4 + 1;
                }
            }
            **(cQlJR7S3 + VtnDyiPRla) = **(cQlJR7S3 + VtnDyiPRla) / (**(LSfBJk8i +VtnDyiPRla));
            {
                fynGKg4 = (646 - 605) - (869 - 828);
                **(ugncP81CoV + VtnDyiPRla) = (329 - 191) - (591 - 453);
                while (fynGKg4 < **(LSfBJk8i +VtnDyiPRla)) {
                    **(ugncP81CoV + VtnDyiPRla) = **(ugncP81CoV + VtnDyiPRla) + pow ((**(*(xXmhWvL + VtnDyiPRla) + fynGKg4) - **(cQlJR7S3 + VtnDyiPRla)), (812 - 810));
                    fynGKg4 = fynGKg4 + 1;
                }
            }
            **(ugncP81CoV + VtnDyiPRla) = **(ugncP81CoV + VtnDyiPRla) / (**(LSfBJk8i +VtnDyiPRla));
            **(ugncP81CoV + VtnDyiPRla) = sqrt (**(ugncP81CoV + VtnDyiPRla));
            printf ("%.5f\n", **(ugncP81CoV + VtnDyiPRla));
            VtnDyiPRla = VtnDyiPRla +(321 - 320);
        }
    }
}

