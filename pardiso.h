/* Core functions */
extern "C" void pardisoinit (void   *, int    *,   int *, int *, double *, int *);
extern "C" void pardiso     (void   *, int    *,   int *, int *,    int *, int *,
                  double *, int    *,    int *, int *,   int *, int *,
                     int *, double *, double *, int *, double *);

/* Debugging functions. */
extern "C" void pardiso_chkmatrix  (int *, int *, double *, int *, int *, int *);
extern "C" void pardiso_chkvec     (int *, int *, double *, int *);
extern "C" void pardiso_printstats (int *, int *, double *, int *, int *, int *,
                           double *, int *);


/* Pardiso + PardisoInit error handling functions */
enum PARDISO_ERROR_CODES{SUCCESS = 0, NO_LICENSE = -10, EXPIRED_LICENSE = -11, BAD_USER_OR_HOST = -12};
void Report_Pardiso_Error(int Error_Code) {
  switch(Error_Code) {
    case SUCCESS:
      printf("Pardiso Error code %d:\n"
            "No problem here... what are you complaining about?\n", Error_Code);
      break;

    case NO_LICENSE:
      printf("Pardiso Error code %d:\n"
             "Your Pardiso license file is missing. pardiso.lic must be in the\n"
             "same directory as your executable!\n", Error_Code);
      break;

    case EXPIRED_LICENSE:
      printf("Pardiso Error code %d:\n"
             "Your license has expired! Get a new one, you bum.\n", Error_Code);
      break;

    case BAD_USER_OR_HOST:
      printf("Pardiso Error code %d.\n"
             "Invalid username or hostname.", Error_Code);
      break;

    default:
      printf("Pardiso Error code UNKNOWN:\n"
             "I have no idea what you did....\n");
  } // switch(Error_Code) {
} // void Report_Pardiso_Error(int Error_Code) {

/* Pardiso error handling function */
