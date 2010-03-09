#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qabstractmessagehandler.h>
#include <qabstracturiresolver.h>
#include <qabstractxmlnodemodel.h>
#include <qabstractxmlreceiver.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qobject.h>
#include <qsimplexmlnodemodel.h>
#include <qsourcelocation.h>
#include <qtextcodec.h>
#include <qurl.h>
#include <qvector.h>
#include <qxmlformatter.h>
#include <qxmlname.h>
#include <qxmlnamepool.h>
#include <qxmlquery.h>
#include <qxmlresultitems.h>
#include <qxmlschema.h>
#include <qxmlschemavalidator.h>
#include <qxmlserializer.h>



class PythonQtShell_QAbstractMessageHandler : public QAbstractMessageHandler
{
public:

virtual void handleMessage(QtMsgType  type, const QString&  description, const QUrl&  identifier, const QSourceLocation&  sourceLocation);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractMessageHandler : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QAbstractMessageHandler(QAbstractMessageHandler* obj) { delete obj; } 
   void message(QAbstractMessageHandler* theWrappedObject, QtMsgType  type, const QString&  description, const QUrl&  identifier = QUrl(), const QSourceLocation&  sourceLocation = QSourceLocation());
};





class PythonQtShell_QAbstractUriResolver : public QAbstractUriResolver
{
public:
    PythonQtShell_QAbstractUriResolver(QObject*  parent = 0):QAbstractUriResolver(parent),_wrapper(NULL) {};

virtual QUrl  resolve(const QUrl&  relative, const QUrl&  baseURI) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractUriResolver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractUriResolver* new_QAbstractUriResolver(QObject*  parent = 0);
void delete_QAbstractUriResolver(QAbstractUriResolver* obj) { delete obj; } 
};





class PythonQtShell_QAbstractXmlNodeModel : public QAbstractXmlNodeModel
{
public:

virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  NCName) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  NCName) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  ni) const;
virtual short  namespaceForPrefix(const QXmlNodeModelIndex&  ni, const short  prefix) const;
virtual bool  isDeepEqual(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  n) const;
virtual QString  stringValue(const QXmlNodeModelIndex&  n) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAbstractXmlNodeModel : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SimpleAxis NodeCopySetting )
enum SimpleAxis{
  Parent = QAbstractXmlNodeModel::Parent,   FirstChild = QAbstractXmlNodeModel::FirstChild,   PreviousSibling = QAbstractXmlNodeModel::PreviousSibling,   NextSibling = QAbstractXmlNodeModel::NextSibling};
enum NodeCopySetting{
  InheritNamespaces = QAbstractXmlNodeModel::InheritNamespaces,   PreserveNamespaces = QAbstractXmlNodeModel::PreserveNamespaces};
public slots:
void delete_QAbstractXmlNodeModel(QAbstractXmlNodeModel* obj) { delete obj; } 
   QSourceLocation  sourceLocation(QAbstractXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  index) const;
};





class PythonQtShell_QAbstractXmlReceiver : public QAbstractXmlReceiver
{
public:
    PythonQtShell_QAbstractXmlReceiver():QAbstractXmlReceiver(),_wrapper(NULL) {};

virtual void startOfSequence();
virtual void whitespaceOnly(const QStringRef&  value);
virtual void startElement(const QXmlName&  name);
virtual void comment(const QString&  value);
virtual void characters(const QStringRef&  value);
virtual void startDocument();
virtual void processingInstruction(const QXmlName&  target, const QString&  value);
virtual void endElement();
virtual void namespaceBinding(const QXmlName&  name);
virtual void atomicValue(const QVariant&  value);
virtual void endOfSequence();
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void endDocument();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractXmlReceiver : public QAbstractXmlReceiver
{ public:
inline void promoted_whitespaceOnly(const QStringRef&  value) { QAbstractXmlReceiver::whitespaceOnly(value); }
};

class PythonQtWrapper_QAbstractXmlReceiver : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractXmlReceiver* new_QAbstractXmlReceiver();
QAbstractXmlReceiver* new_QAbstractXmlReceiver(const QAbstractXmlReceiver& other) {
PythonQtShell_QAbstractXmlReceiver* a = new PythonQtShell_QAbstractXmlReceiver();
*((QAbstractXmlReceiver*)a) = other;
return a; }
void delete_QAbstractXmlReceiver(QAbstractXmlReceiver* obj) { delete obj; } 
   void whitespaceOnly(QAbstractXmlReceiver* theWrappedObject, const QStringRef&  value);
};





class PythonQtWrapper_QPatternist : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtWrapper_QPatternistSDK : public QObject
{ Q_OBJECT
public:
public slots:
};





class PythonQtShell_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{
public:
    PythonQtShell_QSimpleXmlNodeModel(const QXmlNamePool&  namePool):QSimpleXmlNodeModel(namePool),_wrapper(NULL) {};

virtual QString  stringValue(const QXmlNodeModelIndex&  node) const;
virtual QVector<QXmlNodeModelIndex >  nodesByIdref(const QXmlName&  idref) const;
virtual QXmlNodeModelIndex  elementById(const QXmlName&  id) const;
virtual QUrl  baseUri(const QXmlNodeModelIndex&  node) const;
virtual QVector<QXmlName >  namespaceBindings(const QXmlNodeModelIndex&  arg__1) const;
virtual QXmlNodeModelIndex::DocumentOrder  compareOrder(const QXmlNodeModelIndex&  ni1, const QXmlNodeModelIndex&  ni2) const;
virtual QUrl  documentUri(const QXmlNodeModelIndex&  ni) const;
virtual QVector<QXmlNodeModelIndex >  attributes(const QXmlNodeModelIndex&  element) const;
virtual QVariant  typedValue(const QXmlNodeModelIndex&  n) const;
virtual QXmlName  name(const QXmlNodeModelIndex&  ni) const;
virtual QXmlNodeModelIndex  root(const QXmlNodeModelIndex&  n) const;
virtual QXmlNodeModelIndex  nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis  axis, const QXmlNodeModelIndex&  origin) const;
virtual QXmlNodeModelIndex::NodeKind  kind(const QXmlNodeModelIndex&  ni) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSimpleXmlNodeModel : public QSimpleXmlNodeModel
{ public:
inline QString  promoted_stringValue(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::stringValue(node); }
inline QVector<QXmlNodeModelIndex >  promoted_nodesByIdref(const QXmlName&  idref) const { return QSimpleXmlNodeModel::nodesByIdref(idref); }
inline QXmlNodeModelIndex  promoted_elementById(const QXmlName&  id) const { return QSimpleXmlNodeModel::elementById(id); }
inline QUrl  promoted_baseUri(const QXmlNodeModelIndex&  node) const { return QSimpleXmlNodeModel::baseUri(node); }
inline QVector<QXmlName >  promoted_namespaceBindings(const QXmlNodeModelIndex&  arg__1) const { return QSimpleXmlNodeModel::namespaceBindings(arg__1); }
};

class PythonQtWrapper_QSimpleXmlNodeModel : public QObject
{ Q_OBJECT
public:
public slots:
QSimpleXmlNodeModel* new_QSimpleXmlNodeModel(const QXmlNamePool&  namePool);
void delete_QSimpleXmlNodeModel(QSimpleXmlNodeModel* obj) { delete obj; } 
   QXmlNamePool*  namePool(QSimpleXmlNodeModel* theWrappedObject) const;
   QString  stringValue(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
   QVector<QXmlNodeModelIndex >  nodesByIdref(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  idref) const;
   QXmlNodeModelIndex  elementById(QSimpleXmlNodeModel* theWrappedObject, const QXmlName&  id) const;
   QUrl  baseUri(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  node) const;
   QVector<QXmlName >  namespaceBindings(QSimpleXmlNodeModel* theWrappedObject, const QXmlNodeModelIndex&  arg__1) const;
};





class PythonQtWrapper_QSourceLocation : public QObject
{ Q_OBJECT
public:
public slots:
QSourceLocation* new_QSourceLocation();
QSourceLocation* new_QSourceLocation(const QSourceLocation&  other);
QSourceLocation* new_QSourceLocation(const QUrl&  uri, int  line = -1, int  column = -1);
void delete_QSourceLocation(QSourceLocation* obj) { delete obj; } 
   qint64  column(QSourceLocation* theWrappedObject) const;
   qint64  line(QSourceLocation* theWrappedObject) const;
   void setColumn(QSourceLocation* theWrappedObject, qint64  newColumn);
   QUrl  uri(QSourceLocation* theWrappedObject) const;
   bool  isNull(QSourceLocation* theWrappedObject) const;
   bool  operator_equal(QSourceLocation* theWrappedObject, const QSourceLocation&  other) const;
   void setUri(QSourceLocation* theWrappedObject, const QUrl&  newUri);
   void setLine(QSourceLocation* theWrappedObject, qint64  newLine);
    QString py_toString(QSourceLocation*);
};





class PythonQtShell_QXmlFormatter : public QXmlFormatter
{
public:
    PythonQtShell_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlFormatter(query, outputDevice),_wrapper(NULL) {};

virtual void startOfSequence();
virtual void startElement(const QXmlName&  name);
virtual void comment(const QString&  value);
virtual void characters(const QStringRef&  value);
virtual void startDocument();
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void atomicValue(const QVariant&  value);
virtual void endOfSequence();
virtual void endElement();
virtual void endDocument();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlFormatter : public QXmlFormatter
{ public:
inline void promoted_startOfSequence() { QXmlFormatter::startOfSequence(); }
inline void promoted_startElement(const QXmlName&  name) { QXmlFormatter::startElement(name); }
inline void promoted_comment(const QString&  value) { QXmlFormatter::comment(value); }
inline void promoted_characters(const QStringRef&  value) { QXmlFormatter::characters(value); }
inline void promoted_startDocument() { QXmlFormatter::startDocument(); }
inline void promoted_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlFormatter::processingInstruction(name, value); }
inline void promoted_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlFormatter::attribute(name, value); }
inline void promoted_atomicValue(const QVariant&  value) { QXmlFormatter::atomicValue(value); }
inline void promoted_endOfSequence() { QXmlFormatter::endOfSequence(); }
inline void promoted_endElement() { QXmlFormatter::endElement(); }
inline void promoted_endDocument() { QXmlFormatter::endDocument(); }
};

class PythonQtWrapper_QXmlFormatter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlFormatter* new_QXmlFormatter(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlFormatter(QXmlFormatter* obj) { delete obj; } 
   void startOfSequence(QXmlFormatter* theWrappedObject);
   void startElement(QXmlFormatter* theWrappedObject, const QXmlName&  name);
   void comment(QXmlFormatter* theWrappedObject, const QString&  value);
   void characters(QXmlFormatter* theWrappedObject, const QStringRef&  value);
   int  indentationDepth(QXmlFormatter* theWrappedObject) const;
   void startDocument(QXmlFormatter* theWrappedObject);
   void processingInstruction(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QString&  value);
   void attribute(QXmlFormatter* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void atomicValue(QXmlFormatter* theWrappedObject, const QVariant&  value);
   void endOfSequence(QXmlFormatter* theWrappedObject);
   void endElement(QXmlFormatter* theWrappedObject);
   void endDocument(QXmlFormatter* theWrappedObject);
   void setIndentationDepth(QXmlFormatter* theWrappedObject, int  depth);
};





class PythonQtWrapper_QXmlItem : public QObject
{ Q_OBJECT
public:
public slots:
QXmlItem* new_QXmlItem();
QXmlItem* new_QXmlItem(const QVariant&  atomicValue);
QXmlItem* new_QXmlItem(const QXmlItem&  other);
QXmlItem* new_QXmlItem(const QXmlNodeModelIndex&  node);
void delete_QXmlItem(QXmlItem* obj) { delete obj; } 
   bool  isAtomicValue(QXmlItem* theWrappedObject) const;
   bool  isNode(QXmlItem* theWrappedObject) const;
   QVariant  toAtomicValue(QXmlItem* theWrappedObject) const;
   bool  isNull(QXmlItem* theWrappedObject) const;
   QXmlNodeModelIndex  toNodeModelIndex(QXmlItem* theWrappedObject) const;
};





class PythonQtWrapper_QXmlName : public QObject
{ Q_OBJECT
public:
public slots:
QXmlName* new_QXmlName();
QXmlName* new_QXmlName(QXmlNamePool&  namePool, const QString&  localName, const QString&  namespaceURI = QString(), const QString&  prefix = QString());
QXmlName* new_QXmlName(const QXmlName& other) {
QXmlName* a = new QXmlName();
*((QXmlName*)a) = other;
return a; }
void delete_QXmlName(QXmlName* obj) { delete obj; } 
   QString  namespaceUri(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  static_QXmlName_isNCName(const QString&  candidate);
   bool  operator_equal(QXmlName* theWrappedObject, const QXmlName&  other) const;
   QString  localName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   bool  isNull(QXmlName* theWrappedObject) const;
   QString  toClarkName(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QString  prefix(QXmlName* theWrappedObject, const QXmlNamePool&  query) const;
   QXmlName  static_QXmlName_fromClarkName(const QString&  clarkName, const QXmlNamePool&  namePool);
};





class PythonQtWrapper_QXmlNamePool : public QObject
{ Q_OBJECT
public:
public slots:
QXmlNamePool* new_QXmlNamePool();
QXmlNamePool* new_QXmlNamePool(const QXmlNamePool&  other);
void delete_QXmlNamePool(QXmlNamePool* obj) { delete obj; } 
};





class PythonQtWrapper_QXmlNodeModelIndex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(NodeKind DocumentOrder )
enum NodeKind{
  Attribute = QXmlNodeModelIndex::Attribute,   Comment = QXmlNodeModelIndex::Comment,   Document = QXmlNodeModelIndex::Document,   Element = QXmlNodeModelIndex::Element,   Namespace = QXmlNodeModelIndex::Namespace,   ProcessingInstruction = QXmlNodeModelIndex::ProcessingInstruction,   Text = QXmlNodeModelIndex::Text};
enum DocumentOrder{
  Precedes = QXmlNodeModelIndex::Precedes,   Is = QXmlNodeModelIndex::Is,   Follows = QXmlNodeModelIndex::Follows};
public slots:
QXmlNodeModelIndex* new_QXmlNodeModelIndex();
QXmlNodeModelIndex* new_QXmlNodeModelIndex(const QXmlNodeModelIndex&  other);
void delete_QXmlNodeModelIndex(QXmlNodeModelIndex* obj) { delete obj; } 
   const QAbstractXmlNodeModel*  model(QXmlNodeModelIndex* theWrappedObject) const;
   qint64  additionalData(QXmlNodeModelIndex* theWrappedObject) const;
   qint64  data(QXmlNodeModelIndex* theWrappedObject) const;
   bool  operator_equal(QXmlNodeModelIndex* theWrappedObject, const QXmlNodeModelIndex&  other) const;
   bool  isNull(QXmlNodeModelIndex* theWrappedObject) const;
};





class PythonQtWrapper_QXmlQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryLanguage )
enum QueryLanguage{
  XQuery10 = QXmlQuery::XQuery10,   XSLT20 = QXmlQuery::XSLT20,   XmlSchema11IdentityConstraintSelector = QXmlQuery::XmlSchema11IdentityConstraintSelector,   XmlSchema11IdentityConstraintField = QXmlQuery::XmlSchema11IdentityConstraintField,   XPath20 = QXmlQuery::XPath20};
public slots:
QXmlQuery* new_QXmlQuery();
QXmlQuery* new_QXmlQuery(QXmlQuery::QueryLanguage  queryLanguage, const QXmlNamePool&  np = QXmlNamePool());
QXmlQuery* new_QXmlQuery(const QXmlNamePool&  np);
QXmlQuery* new_QXmlQuery(const QXmlQuery&  other);
void delete_QXmlQuery(QXmlQuery* obj) { delete obj; } 
   bool  isValid(QXmlQuery* theWrappedObject) const;
   QXmlNamePool  namePool(QXmlQuery* theWrappedObject) const;
   QXmlQuery*  operator_assign(QXmlQuery* theWrappedObject, const QXmlQuery&  other);
   QXmlName  initialTemplateName(QXmlQuery* theWrappedObject) const;
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlQuery&  query);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlQuery&  query);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, QIODevice*  arg__2);
   void bindVariable(QXmlQuery* theWrappedObject, const QString&  localName, const QXmlItem&  value);
   void bindVariable(QXmlQuery* theWrappedObject, const QXmlName&  name, const QXmlItem&  value);
   bool  evaluateTo(QXmlQuery* theWrappedObject, QString*  output) const;
   bool  evaluateTo(QXmlQuery* theWrappedObject, QIODevice*  target) const;
   void evaluateTo(QXmlQuery* theWrappedObject, QXmlResultItems*  result) const;
   void setMessageHandler(QXmlQuery* theWrappedObject, QAbstractMessageHandler*  messageHandler);
   QNetworkAccessManager*  networkAccessManager(QXmlQuery* theWrappedObject) const;
   const QAbstractUriResolver*  uriResolver(QXmlQuery* theWrappedObject) const;
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QString&  name);
   void setInitialTemplateName(QXmlQuery* theWrappedObject, const QXmlName&  name);
   void setQuery(QXmlQuery* theWrappedObject, const QUrl&  queryURI, const QUrl&  baseURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, QIODevice*  sourceCode, const QUrl&  documentURI = QUrl());
   void setQuery(QXmlQuery* theWrappedObject, const QString&  sourceCode, const QUrl&  documentURI = QUrl());
   bool  setFocus(QXmlQuery* theWrappedObject, const QString&  focus);
   bool  setFocus(QXmlQuery* theWrappedObject, QIODevice*  document);
   void setFocus(QXmlQuery* theWrappedObject, const QXmlItem&  item);
   bool  setFocus(QXmlQuery* theWrappedObject, const QUrl&  documentURI);
   QXmlQuery::QueryLanguage  queryLanguage(QXmlQuery* theWrappedObject) const;
   void setNetworkAccessManager(QXmlQuery* theWrappedObject, QNetworkAccessManager*  newManager);
   void setUriResolver(QXmlQuery* theWrappedObject, const QAbstractUriResolver*  resolver);
   QAbstractMessageHandler*  messageHandler(QXmlQuery* theWrappedObject) const;
};





class PythonQtShell_QXmlResultItems : public QXmlResultItems
{
public:
    PythonQtShell_QXmlResultItems():QXmlResultItems(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QXmlResultItems : public QObject
{ Q_OBJECT
public:
public slots:
QXmlResultItems* new_QXmlResultItems();
void delete_QXmlResultItems(QXmlResultItems* obj) { delete obj; } 
   bool  hasError(QXmlResultItems* theWrappedObject) const;
   QXmlItem  next(QXmlResultItems* theWrappedObject);
   QXmlItem  current(QXmlResultItems* theWrappedObject) const;
};





class PythonQtWrapper_QXmlSchema : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchema* new_QXmlSchema();
QXmlSchema* new_QXmlSchema(const QXmlSchema&  other);
void delete_QXmlSchema(QXmlSchema* obj) { delete obj; } 
   bool  isValid(QXmlSchema* theWrappedObject) const;
   void setMessageHandler(QXmlSchema* theWrappedObject, QAbstractMessageHandler*  handler);
   QXmlNamePool  namePool(QXmlSchema* theWrappedObject) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchema* theWrappedObject) const;
   bool  load(QXmlSchema* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl());
   bool  load(QXmlSchema* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl());
   void setUriResolver(QXmlSchema* theWrappedObject, const QAbstractUriResolver*  resolver);
   bool  load(QXmlSchema* theWrappedObject, const QUrl&  source);
   void setNetworkAccessManager(QXmlSchema* theWrappedObject, QNetworkAccessManager*  networkmanager);
   const QAbstractUriResolver*  uriResolver(QXmlSchema* theWrappedObject) const;
   QAbstractMessageHandler*  messageHandler(QXmlSchema* theWrappedObject) const;
   QUrl  documentUri(QXmlSchema* theWrappedObject) const;
};





class PythonQtWrapper_QXmlSchemaValidator : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSchemaValidator* new_QXmlSchemaValidator();
QXmlSchemaValidator* new_QXmlSchemaValidator(const QXmlSchema&  schema);
void delete_QXmlSchemaValidator(QXmlSchemaValidator* obj) { delete obj; } 
   QXmlSchema  schema(QXmlSchemaValidator* theWrappedObject) const;
   void setMessageHandler(QXmlSchemaValidator* theWrappedObject, QAbstractMessageHandler*  handler);
   QXmlNamePool  namePool(QXmlSchemaValidator* theWrappedObject) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QByteArray&  data, const QUrl&  documentUri = QUrl()) const;
   void setSchema(QXmlSchemaValidator* theWrappedObject, const QXmlSchema&  schema);
   bool  validate(QXmlSchemaValidator* theWrappedObject, QIODevice*  source, const QUrl&  documentUri = QUrl()) const;
   bool  validate(QXmlSchemaValidator* theWrappedObject, const QUrl&  source) const;
   QNetworkAccessManager*  networkAccessManager(QXmlSchemaValidator* theWrappedObject) const;
   void setNetworkAccessManager(QXmlSchemaValidator* theWrappedObject, QNetworkAccessManager*  networkmanager);
   const QAbstractUriResolver*  uriResolver(QXmlSchemaValidator* theWrappedObject) const;
   QAbstractMessageHandler*  messageHandler(QXmlSchemaValidator* theWrappedObject) const;
   void setUriResolver(QXmlSchemaValidator* theWrappedObject, const QAbstractUriResolver*  resolver);
};





class PythonQtShell_QXmlSerializer : public QXmlSerializer
{
public:
    PythonQtShell_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice):QXmlSerializer(query, outputDevice),_wrapper(NULL) {};

virtual void startElement(const QXmlName&  name);
virtual void startOfSequence();
virtual void comment(const QString&  value);
virtual void startDocument();
virtual void namespaceBinding(const QXmlName&  nb);
virtual void characters(const QStringRef&  value);
virtual void processingInstruction(const QXmlName&  name, const QString&  value);
virtual void atomicValue(const QVariant&  value);
virtual void endOfSequence();
virtual void attribute(const QXmlName&  name, const QStringRef&  value);
virtual void endElement();
virtual void endDocument();
virtual void whitespaceOnly(const QStringRef&  value);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QXmlSerializer : public QXmlSerializer
{ public:
inline void promoted_startElement(const QXmlName&  name) { QXmlSerializer::startElement(name); }
inline void promoted_startOfSequence() { QXmlSerializer::startOfSequence(); }
inline void promoted_comment(const QString&  value) { QXmlSerializer::comment(value); }
inline void promoted_startDocument() { QXmlSerializer::startDocument(); }
inline void promoted_namespaceBinding(const QXmlName&  nb) { QXmlSerializer::namespaceBinding(nb); }
inline void promoted_characters(const QStringRef&  value) { QXmlSerializer::characters(value); }
inline void promoted_processingInstruction(const QXmlName&  name, const QString&  value) { QXmlSerializer::processingInstruction(name, value); }
inline void promoted_atomicValue(const QVariant&  value) { QXmlSerializer::atomicValue(value); }
inline void promoted_endOfSequence() { QXmlSerializer::endOfSequence(); }
inline void promoted_attribute(const QXmlName&  name, const QStringRef&  value) { QXmlSerializer::attribute(name, value); }
inline void promoted_endElement() { QXmlSerializer::endElement(); }
inline void promoted_endDocument() { QXmlSerializer::endDocument(); }
};

class PythonQtWrapper_QXmlSerializer : public QObject
{ Q_OBJECT
public:
public slots:
QXmlSerializer* new_QXmlSerializer(const QXmlQuery&  query, QIODevice*  outputDevice);
void delete_QXmlSerializer(QXmlSerializer* obj) { delete obj; } 
   void startElement(QXmlSerializer* theWrappedObject, const QXmlName&  name);
   void startOfSequence(QXmlSerializer* theWrappedObject);
   void comment(QXmlSerializer* theWrappedObject, const QString&  value);
   void startDocument(QXmlSerializer* theWrappedObject);
   void namespaceBinding(QXmlSerializer* theWrappedObject, const QXmlName&  nb);
   const QTextCodec*  codec(QXmlSerializer* theWrappedObject) const;
   void characters(QXmlSerializer* theWrappedObject, const QStringRef&  value);
   void processingInstruction(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QString&  value);
   void atomicValue(QXmlSerializer* theWrappedObject, const QVariant&  value);
   void endOfSequence(QXmlSerializer* theWrappedObject);
   QIODevice*  outputDevice(QXmlSerializer* theWrappedObject) const;
   void attribute(QXmlSerializer* theWrappedObject, const QXmlName&  name, const QStringRef&  value);
   void endElement(QXmlSerializer* theWrappedObject);
   void setCodec(QXmlSerializer* theWrappedObject, const QTextCodec*  codec);
   void endDocument(QXmlSerializer* theWrappedObject);
};

