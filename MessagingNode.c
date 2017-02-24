
/************************************************************
 * MessagingNode.c
 * Darren J. Draper
 */

#include <stdlib.h>
#include <stdio.h>
#include <curl/curl.h>


/************************************************************
 * Function:    modemSend
 * Description: 
 * Returns:     void
 */
void modemSend(char *message)
{
    printf("> %s\n", message);
}

/************************************************************
 * Function:    WorkerPending
 * Description: Check for message.  There will either be one 
 *              message or none.  The response will contain 
 *              a message and a taskname.
 * Returns:     void
 */
void WorkerPending()
{
    printf("WorkerPending\n");

    modemSend("WorkerPending");
    
}

/************************************************************
 * Function:    WorkerComplete
 * Description: 
 * Returns:     void
 */
void WorkerComplete()
{
    printf("WorkerComplete\n");

    modemSend("WorkerComplete");
}

/************************************************************
 * Function:    WorkerReceived
 * Description: 
 * Returns:     void
 */
void WorkerReceived()
{
    printf("WorkerReceived\n");

    modemSend("WorkerReceived");
}

/************************************************************
 * Function:    main
 * Description: Main entry point.
 * Returns:     void
 */
int main()
{
    CURL *curl = curl_easy_init();

    printf ("Messaging Node\n");

    WorkerPending();

    WorkerReceived();

    WorkerComplete();

    return EXIT_SUCCESS;

}