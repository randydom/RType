//
// TThread.hpp for  in /home/coudra_c/rendu/TP/thread_pool
//
// Made by Coudray Colin
// Login   <coudra_c@epitech.net>
//
// Started on  Sat Apr 18 17:31:25 2015 Coudray Colin
// Last update Mon Dec 21 15:43:10 2015 colin
//

#ifndef WTHREAD_HPP_
#define WTHREAD_HPP_

#include <windows.h>

#include <iostream>

/*!
 * An heritable interface of thread using pthread.
 */

typedef void			*(*thr_func)(void*);

class Thread
{
public:
  //! A classical constructor
  Thread(thr_func action);
  virtual ~Thread();
  //! Entry point of the thread
  virtual int	start(void *data);
  //! Exit point of the thread
  virtual void	*join(void);
  //! Return if the thread is currently working or not.
  virtual bool	isWorking(void) const;
  static void	exit(void);

private:

  HANDLE  	thread_handle;
  int		thread_id;
  thr_func	thread_start;
  bool		working;
};

#endif
