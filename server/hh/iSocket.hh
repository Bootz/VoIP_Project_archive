//
// ISocket.hh for  in /home/lesueu_l//Desktop/prog/in_prog/Babel/Socket
// 
// Made by louis lesueur
// Login   <lesueu_l@epitech.net>
// 
// Started on  Sun Nov 13 12:28:27 2011 louis lesueur
// Last update Sun Nov 13 12:52:16 2011 louis lesueur
//

#ifndef			__BABEL_ISOCKET_HH__
# define		__BABEL_ISOCKET_HH__

typedef int		 SOCKET;

class ISocket
{
 public:
  virtual ~ISocket() {}

  virtual bool		connectToServer(std::string const & host, unsigned short port) = 0;
  virtual void		setAcceptSocket(SOCKET _sock) = 0;
  virtual SOCKET	getListenSocket(void)const = 0;
  virtual SOCKET	getAcceptSocket(void)const = 0;
  virtual int		send_d(SOCKET sock, std::string& str) = 0;
  virtual int		recv_d(SOCKET sock, std::string &str) = 0;
  virtual int		getSocket() const = 0;
  virtual unsigned short	clientAccept(int s) = 0;

};

#endif			/*__BABEL_ISOCKET_HH__*/