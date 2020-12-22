#ifndef STOCKS_H_INCLUDED
#define STOCKS_H_INCLUDED
#include "appconst.h"

typedef struct _trading_queue_ Trading();

struct _trading_queue_ {
    char name[40];
    char date[15];
    int32_t price;
    int32_t quantity;

};

typedef struct _queue_ Queue;

struct _queue_ {
    uint32_t size;
    uint32_t count;
    uint32_t rear;
    uint32_t front;
    int32_t data[Q_LEN];


};

typedef struct _queue_result_ QueueResult;

struct _queue_result_ {
    Trading share;
    uint32_t status;

};

Queue queue_new(uint32_t size);
uint8_t queue_full(Queue 'q);
uint8_t queue_empty(Queue 'q);
Queue' queue_add(Queue 'q, Trading share, QueueResult 'res);
Queue' queue_delete(Queue 'q, QueueResult 'res);
Queue' topup(Queue, 'q, TradingQ share, int32_t quantity);
Queue' look_up(Queue, 'q, TradingQ share);
uint32_t queue_length(Queue 'q);
#endif // STOCKS_H_INCLUDED
