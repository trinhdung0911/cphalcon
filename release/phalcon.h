
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#define PHALCON_RELEASE 1

zend_class_entry *phalcon_dispatcher_class_entry;
zend_class_entry *phalcon_request_class_entry;
zend_class_entry *phalcon_controller_front_class_entry;
zend_class_entry *phalcon_view_class_entry;
zend_class_entry *phalcon_test_class_entry;
zend_class_entry *phalcon_utils_class_entry;
zend_class_entry *phalcon_db_class_entry;
zend_class_entry *phalcon_internal_test_class_entry;
zend_class_entry *phalcon_tag_exception_class_entry;
zend_class_entry *phalcon_router_rewrite_class_entry;
zend_class_entry *phalcon_db_exception_class_entry;
zend_class_entry *phalcon_db_mysql_class_entry;
zend_class_entry *phalcon_db_pool_class_entry;
zend_class_entry *phalcon_db_dialect_mysql_class_entry;
zend_class_entry *phalcon_db_rawvalue_class_entry;
zend_class_entry *phalcon_flash_class_entry;
zend_class_entry *phalcon_logger_class_entry;
zend_class_entry *phalcon_config_class_entry;
zend_class_entry *phalcon_filter_class_entry;
zend_class_entry *phalcon_exception_class_entry;
zend_class_entry *phalcon_config_adapter_ini_class_entry;
zend_class_entry *phalcon_config_exception_class_entry;
zend_class_entry *phalcon_controller_class_entry;
zend_class_entry *phalcon_model_message_class_entry;
zend_class_entry *phalcon_model_manager_class_entry;
zend_class_entry *phalcon_model_metadata_class_entry;
zend_class_entry *phalcon_model_base_class_entry;
zend_class_entry *phalcon_model_metadata_memory_class_entry;
zend_class_entry *phalcon_model_resultset_class_entry;
zend_class_entry *phalcon_model_exception_class_entry;
zend_class_entry *phalcon_model_transaction_class_entry;
zend_class_entry *phalcon_model_transaction_failed_class_entry;
zend_class_entry *phalcon_transactions_class_entry;
zend_class_entry *phalcon_view_exception_class_entry;
zend_class_entry *phalcon_tag_class_entry;

PHP_METHOD(Phalcon_Dispatcher, __construct);
PHP_METHOD(Phalcon_Dispatcher, dispatch);
PHP_METHOD(Phalcon_Dispatcher, setRouter);
PHP_METHOD(Phalcon_Dispatcher, getRouter);
PHP_METHOD(Phalcon_Dispatcher, getFrontController);
PHP_METHOD(Phalcon_Dispatcher, getControllers);

PHP_METHOD(Phalcon_Request, __construct);
PHP_METHOD(Phalcon_Request, getInstance);
PHP_METHOD(Phalcon_Request, setFilter);
PHP_METHOD(Phalcon_Request, getFilter);
PHP_METHOD(Phalcon_Request, getPost);
PHP_METHOD(Phalcon_Request, getQuery);
PHP_METHOD(Phalcon_Request, isAjax);
PHP_METHOD(Phalcon_Request, isFlashRequested);
PHP_METHOD(Phalcon_Request, isSoapRequested);
PHP_METHOD(Phalcon_Request, isSecureRequest);
PHP_METHOD(Phalcon_Request, getRawBody);
PHP_METHOD(Phalcon_Request, getServerAddress);
PHP_METHOD(Phalcon_Request, getServerName);
PHP_METHOD(Phalcon_Request, getHeader);
PHP_METHOD(Phalcon_Request, getScheme);
PHP_METHOD(Phalcon_Request, getHttpHost);
PHP_METHOD(Phalcon_Request, getMethod);
PHP_METHOD(Phalcon_Request, getUserAgent);
PHP_METHOD(Phalcon_Request, isPost);
PHP_METHOD(Phalcon_Request, isGet);
PHP_METHOD(Phalcon_Request, isPut);
PHP_METHOD(Phalcon_Request, isHead);
PHP_METHOD(Phalcon_Request, isDelete);
PHP_METHOD(Phalcon_Request, isOptions);
PHP_METHOD(Phalcon_Request, hasFiles);
PHP_METHOD(Phalcon_Request, getUploadedFiles);
PHP_METHOD(Phalcon_Request, getHTTPReferer);
PHP_METHOD(Phalcon_Request, getAcceptableContent);
PHP_METHOD(Phalcon_Request, getClientCharsets);
PHP_METHOD(Phalcon_Request, getBestQualityCharset);
PHP_METHOD(Phalcon_Request, getClientAddress);

PHP_METHOD(Phalcon_Controller_Front, __construct);
PHP_METHOD(Phalcon_Controller_Front, getInstance);
PHP_METHOD(Phalcon_Controller_Front, setConfig);
PHP_METHOD(Phalcon_Controller_Front, setDispatcher);
PHP_METHOD(Phalcon_Controller_Front, getDispatcher);
PHP_METHOD(Phalcon_Controller_Front, setBaseUri);
PHP_METHOD(Phalcon_Controller_Front, getBaseUri);
PHP_METHOD(Phalcon_Controller_Front, setBasePath);
PHP_METHOD(Phalcon_Controller_Front, getBasePath);
PHP_METHOD(Phalcon_Controller_Front, setModelComponent);
PHP_METHOD(Phalcon_Controller_Front, getModelComponent);
PHP_METHOD(Phalcon_Controller_Front, dispatchLoop);

PHP_METHOD(Phalcon_View, __construct);
PHP_METHOD(Phalcon_View, setViewsDir);
PHP_METHOD(Phalcon_View, setTemplateBefore);
PHP_METHOD(Phalcon_View, setTemplateAfter);
PHP_METHOD(Phalcon_View, setParamToView);
PHP_METHOD(Phalcon_View, render);
PHP_METHOD(Phalcon_View, getContent);
PHP_METHOD(Phalcon_View, url);
PHP_METHOD(Phalcon_View, path);

PHP_METHOD(Phalcon_Test, nice);

PHP_METHOD(Phalcon_Utils, camelize);
PHP_METHOD(Phalcon_Utils, uncamelize);
PHP_METHOD(Phalcon_Utils, getUrl);

PHP_METHOD(Phalcon_Db, __construct);
PHP_METHOD(Phalcon_Db, setLogger);
PHP_METHOD(Phalcon_Db, log);
PHP_METHOD(Phalcon_Db, fetchOne);
PHP_METHOD(Phalcon_Db, fetchAll);
PHP_METHOD(Phalcon_Db, insert);
PHP_METHOD(Phalcon_Db, update);
PHP_METHOD(Phalcon_Db, delete);
PHP_METHOD(Phalcon_Db, begin);
PHP_METHOD(Phalcon_Db, rollback);
PHP_METHOD(Phalcon_Db, commit);
PHP_METHOD(Phalcon_Db, setUnderTransaction);
PHP_METHOD(Phalcon_Db, isUnderTransaction);
PHP_METHOD(Phalcon_Db, getHaveAutoCommit);
PHP_METHOD(Phalcon_Db, getDatabaseName);
PHP_METHOD(Phalcon_Db, getDefaultSchema);
PHP_METHOD(Phalcon_Db, getUsername);
PHP_METHOD(Phalcon_Db, getHostName);
PHP_METHOD(Phalcon_Db, getConnectionId);
PHP_METHOD(Phalcon_Db, factory);

PHP_METHOD(Phalcon_Internal_Test, e1);
PHP_METHOD(Phalcon_Internal_Test, e2);
PHP_METHOD(Phalcon_Internal_Test, e3);
PHP_METHOD(Phalcon_Internal_Test, e4);
PHP_METHOD(Phalcon_Internal_Test, e5);
PHP_METHOD(Phalcon_Internal_Test, e6);
PHP_METHOD(Phalcon_Internal_Test, e7);
PHP_METHOD(Phalcon_Internal_Test, e8);
PHP_METHOD(Phalcon_Internal_Test, e9);
PHP_METHOD(Phalcon_Internal_Test, e10);
PHP_METHOD(Phalcon_Internal_Test, e11);
PHP_METHOD(Phalcon_Internal_Test, e12);
PHP_METHOD(Phalcon_Internal_Test, e13);
PHP_METHOD(Phalcon_Internal_Test, e14);
PHP_METHOD(Phalcon_Internal_Test, o1);
PHP_METHOD(Phalcon_Internal_Test, o2);
PHP_METHOD(Phalcon_Internal_Test, o3);
PHP_METHOD(Phalcon_Internal_Test, o4);
PHP_METHOD(Phalcon_Internal_Test, o5);
PHP_METHOD(Phalcon_Internal_Test, o6);
PHP_METHOD(Phalcon_Internal_Test, o7);
PHP_METHOD(Phalcon_Internal_Test, o8);
PHP_METHOD(Phalcon_Internal_Test, o9);
PHP_METHOD(Phalcon_Internal_Test, o10);
PHP_METHOD(Phalcon_Internal_Test, o11);
PHP_METHOD(Phalcon_Internal_Test, o12);
PHP_METHOD(Phalcon_Internal_Test, o13);
PHP_METHOD(Phalcon_Internal_Test, o14);
PHP_METHOD(Phalcon_Internal_Test, o15);
PHP_METHOD(Phalcon_Internal_Test, o16);
PHP_METHOD(Phalcon_Internal_Test, o17);
PHP_METHOD(Phalcon_Internal_Test, o18);
PHP_METHOD(Phalcon_Internal_Test, o19);
PHP_METHOD(Phalcon_Internal_Test, a1);
PHP_METHOD(Phalcon_Internal_Test, a2);
PHP_METHOD(Phalcon_Internal_Test, a3);
PHP_METHOD(Phalcon_Internal_Test, a10);
PHP_METHOD(Phalcon_Internal_Test, a11);
PHP_METHOD(Phalcon_Internal_Test, a12);
PHP_METHOD(Phalcon_Internal_Test, a13);
PHP_METHOD(Phalcon_Internal_Test, a14);
PHP_METHOD(Phalcon_Internal_Test, a15);
PHP_METHOD(Phalcon_Internal_Test, c1);
PHP_METHOD(Phalcon_Internal_Test, c2);
PHP_METHOD(Phalcon_Internal_Test, c3);
PHP_METHOD(Phalcon_Internal_Test, c4);
PHP_METHOD(Phalcon_Internal_Test, c5);
PHP_METHOD(Phalcon_Internal_Test, c6);
PHP_METHOD(Phalcon_Internal_Test, c7);
PHP_METHOD(Phalcon_Internal_Test, c8);
PHP_METHOD(Phalcon_Internal_Test, c9);
PHP_METHOD(Phalcon_Internal_Test, c10);
PHP_METHOD(Phalcon_Internal_Test, c11);
PHP_METHOD(Phalcon_Internal_Test, f1);
PHP_METHOD(Phalcon_Internal_Test, f2);
PHP_METHOD(Phalcon_Internal_Test, f3);
PHP_METHOD(Phalcon_Internal_Test, f4);
PHP_METHOD(Phalcon_Internal_Test, f5);
PHP_METHOD(Phalcon_Internal_Test, f6);
PHP_METHOD(Phalcon_Internal_Test, f7);
PHP_METHOD(Phalcon_Internal_Test, f8);
PHP_METHOD(Phalcon_Internal_Test, f9);
PHP_METHOD(Phalcon_Internal_Test, m1);
PHP_METHOD(Phalcon_Internal_Test, m2);
PHP_METHOD(Phalcon_Internal_Test, m3);
PHP_METHOD(Phalcon_Internal_Test, m4);
PHP_METHOD(Phalcon_Internal_Test, m5);

PHP_METHOD(Phalcon_Tag_Exception, __construct);

PHP_METHOD(Phalcon_Router_Rewrite, __construct);
PHP_METHOD(Phalcon_Router_Rewrite, handle);
PHP_METHOD(Phalcon_Router_Rewrite, handleString);
PHP_METHOD(Phalcon_Router_Rewrite, handleArray);
PHP_METHOD(Phalcon_Router_Rewrite, handleAssocArray);
PHP_METHOD(Phalcon_Router_Rewrite, getControllerName);
PHP_METHOD(Phalcon_Router_Rewrite, getActionName);
PHP_METHOD(Phalcon_Router_Rewrite, getParams);
PHP_METHOD(Phalcon_Router_Rewrite, finish);
PHP_METHOD(Phalcon_Router_Rewrite, isRouted);

PHP_METHOD(Phalcon_Db_Exception, __construct);

PHP_METHOD(Phalcon_Db_MySQL, __construct);
PHP_METHOD(Phalcon_Db_MySQL, connect);
PHP_METHOD(Phalcon_Db_MySQL, query);
PHP_METHOD(Phalcon_Db_MySQL, close);
PHP_METHOD(Phalcon_Db_MySQL, fetchArray);
PHP_METHOD(Phalcon_Db_MySQL, numRows);
PHP_METHOD(Phalcon_Db_MySQL, dataSeek);
PHP_METHOD(Phalcon_Db_MySQL, affectedRows);
PHP_METHOD(Phalcon_Db_MySQL, setFetchMode);
PHP_METHOD(Phalcon_Db_MySQL, error);
PHP_METHOD(Phalcon_Db_MySQL, noError);
PHP_METHOD(Phalcon_Db_MySQL, lastInsertId);
PHP_METHOD(Phalcon_Db_MySQL, limit);
PHP_METHOD(Phalcon_Db_MySQL, tableExists);
PHP_METHOD(Phalcon_Db_MySQL, viewExists);
PHP_METHOD(Phalcon_Db_MySQL, describeTable);
PHP_METHOD(Phalcon_Db_MySQL, getDateUsingFormat);

PHP_METHOD(Phalcon_Db_Pool, hasDefaultDescriptor);
PHP_METHOD(Phalcon_Db_Pool, setDefaultDescriptor);
PHP_METHOD(Phalcon_Db_Pool, getConnection);

PHP_METHOD(Phalcon_Db_Dialect_MySQL, tableExists);
PHP_METHOD(Phalcon_Db_Dialect_MySQL, describeTable);

PHP_METHOD(Phalcon_Db_RawValue, __construct);
PHP_METHOD(Phalcon_Db_RawValue, getValue);
PHP_METHOD(Phalcon_Db_RawValue, __toString);

PHP_METHOD(Phalcon_Flash, _showMessage);
PHP_METHOD(Phalcon_Flash, error);
PHP_METHOD(Phalcon_Flash, notice);
PHP_METHOD(Phalcon_Flash, success);
PHP_METHOD(Phalcon_Flash, warning);

PHP_METHOD(Phalcon_Logger, __construct);
PHP_METHOD(Phalcon_Logger, setFormat);

PHP_METHOD(Phalcon_Config, __construct);

PHP_METHOD(Phalcon_Filter, sanitize);
PHP_METHOD(Phalcon_Filter, _sanitize);

PHP_METHOD(Phalcon_Exception, __construct);

PHP_METHOD(Phalcon_Config_Adapter_Ini, __construct);

PHP_METHOD(Phalcon_Config_Exception, __construct);

PHP_METHOD(Phalcon_Controller, __construct);
PHP_METHOD(Phalcon_Controller, _forward);
PHP_METHOD(Phalcon_Controller, _forwardToAction);
PHP_METHOD(Phalcon_Controller, _getViewComponent);
PHP_METHOD(Phalcon_Controller, getRequest);
PHP_METHOD(Phalcon_Controller, setParamToView);
PHP_METHOD(Phalcon_Controller, getViewComponent);
PHP_METHOD(Phalcon_Controller, getControllerName);
PHP_METHOD(Phalcon_Controller, getActionName);
PHP_METHOD(Phalcon_Controller, __get);

PHP_METHOD(Phalcon_Model_Message, __construct);
PHP_METHOD(Phalcon_Model_Message, setType);
PHP_METHOD(Phalcon_Model_Message, getType);
PHP_METHOD(Phalcon_Model_Message, setMessage);
PHP_METHOD(Phalcon_Model_Message, getMessage);
PHP_METHOD(Phalcon_Model_Message, setField);
PHP_METHOD(Phalcon_Model_Message, getField);
PHP_METHOD(Phalcon_Model_Message, __toString);

PHP_METHOD(Phalcon_Model_Manager, __construct);
PHP_METHOD(Phalcon_Model_Manager, isModel);
PHP_METHOD(Phalcon_Model_Manager, initializeModel);
PHP_METHOD(Phalcon_Model_Manager, getModel);
PHP_METHOD(Phalcon_Model_Manager, getSource);
PHP_METHOD(Phalcon_Model_Manager, getConnection);
PHP_METHOD(Phalcon_Model_Manager, setMetaData);
PHP_METHOD(Phalcon_Model_Manager, getMetaData);
PHP_METHOD(Phalcon_Model_Manager, autoload);

PHP_METHOD(Phalcon_Model_MetaData, __construct);
PHP_METHOD(Phalcon_Model_MetaData, _initializeMetaData);
PHP_METHOD(Phalcon_Model_MetaData, getAttributes);
PHP_METHOD(Phalcon_Model_MetaData, getPrimaryKeyAttributes);
PHP_METHOD(Phalcon_Model_MetaData, getNonPrimaryKeyAttributes);
PHP_METHOD(Phalcon_Model_MetaData, getNotNullAttributes);
PHP_METHOD(Phalcon_Model_MetaData, getDataTypes);
PHP_METHOD(Phalcon_Model_MetaData, getDataTypesNumeric);

PHP_METHOD(Phalcon_Model_Base, __construct);
PHP_METHOD(Phalcon_Model_Base, setManager);
PHP_METHOD(Phalcon_Model_Base, _connect);
PHP_METHOD(Phalcon_Model_Base, _getAttributes);
PHP_METHOD(Phalcon_Model_Base, _getPrimaryKeyAttributes);
PHP_METHOD(Phalcon_Model_Base, _getNonPrimaryKeyAttributes);
PHP_METHOD(Phalcon_Model_Base, _getNotNullAttributes);
PHP_METHOD(Phalcon_Model_Base, _getDataTypesNumeric);
PHP_METHOD(Phalcon_Model_Base, _getDataTypes);
PHP_METHOD(Phalcon_Model_Base, dump);
PHP_METHOD(Phalcon_Model_Base, _createSQLSelectMulti);
PHP_METHOD(Phalcon_Model_Base, _createSQLSelectOne);
PHP_METHOD(Phalcon_Model_Base, _createResultset);
PHP_METHOD(Phalcon_Model_Base, setTransaction);
PHP_METHOD(Phalcon_Model_Base, isView);
PHP_METHOD(Phalcon_Model_Base, setSource);
PHP_METHOD(Phalcon_Model_Base, getSource);
PHP_METHOD(Phalcon_Model_Base, setSchema);
PHP_METHOD(Phalcon_Model_Base, getSchema);
PHP_METHOD(Phalcon_Model_Base, getConnection);
PHP_METHOD(Phalcon_Model_Base, dumpResult);
PHP_METHOD(Phalcon_Model_Base, dumpResultSelf);
PHP_METHOD(Phalcon_Model_Base, find);
PHP_METHOD(Phalcon_Model_Base, findFirst);
PHP_METHOD(Phalcon_Model_Base, exists);
PHP_METHOD(Phalcon_Model_Base, _exists);
PHP_METHOD(Phalcon_Model_Base, _getGroupResult);
PHP_METHOD(Phalcon_Model_Base, count);
PHP_METHOD(Phalcon_Model_Base, _callEvent);
PHP_METHOD(Phalcon_Model_Base, _cancelOperation);
PHP_METHOD(Phalcon_Model_Base, appendMessage);
PHP_METHOD(Phalcon_Model_Base, getMessages);
PHP_METHOD(Phalcon_Model_Base, save);
PHP_METHOD(Phalcon_Model_Base, delete);
PHP_METHOD(Phalcon_Model_Base, readAttribute);
PHP_METHOD(Phalcon_Model_Base, writeAttribute);


PHP_METHOD(Phalcon_Model_Resultset, __construct);
PHP_METHOD(Phalcon_Model_Resultset, valid);
PHP_METHOD(Phalcon_Model_Resultset, current);
PHP_METHOD(Phalcon_Model_Resultset, next);
PHP_METHOD(Phalcon_Model_Resultset, key);
PHP_METHOD(Phalcon_Model_Resultset, rewind);
PHP_METHOD(Phalcon_Model_Resultset, seek);
PHP_METHOD(Phalcon_Model_Resultset, count);
PHP_METHOD(Phalcon_Model_Resultset, offsetExists);
PHP_METHOD(Phalcon_Model_Resultset, offsetGet);
PHP_METHOD(Phalcon_Model_Resultset, offsetSet);
PHP_METHOD(Phalcon_Model_Resultset, offsetUnset);
PHP_METHOD(Phalcon_Model_Resultset, getFirst);
PHP_METHOD(Phalcon_Model_Resultset, getLast);
PHP_METHOD(Phalcon_Model_Resultset, getModel);
PHP_METHOD(Phalcon_Model_Resultset, each);


PHP_METHOD(Phalcon_Model_Transaction, __construct);
PHP_METHOD(Phalcon_Model_Transaction, setTransactionManager);
PHP_METHOD(Phalcon_Model_Transaction, begin);
PHP_METHOD(Phalcon_Model_Transaction, commit);
PHP_METHOD(Phalcon_Model_Transaction, rollback);
PHP_METHOD(Phalcon_Model_Transaction, getConnection);
PHP_METHOD(Phalcon_Model_Transaction, setIsNewTransaction);
PHP_METHOD(Phalcon_Model_Transaction, setRollbackOnAbort);
PHP_METHOD(Phalcon_Model_Transaction, isManaged);
PHP_METHOD(Phalcon_Model_Transaction, setDependencyPointer);
PHP_METHOD(Phalcon_Model_Transaction, attachDependency);
PHP_METHOD(Phalcon_Model_Transaction, save);
PHP_METHOD(Phalcon_Model_Transaction, getMessages);
PHP_METHOD(Phalcon_Model_Transaction, isValid);
PHP_METHOD(Phalcon_Model_Transaction, setRollbackedRecord);

PHP_METHOD(Phalcon_Model_Transaction_Failed, __construct);
PHP_METHOD(Phalcon_Model_Transaction_Failed, getRecordMessages);
PHP_METHOD(Phalcon_Model_Transaction_Failed, getRecord);

PHP_METHOD(Phalcon_Transactions, hasUserTransaction);
PHP_METHOD(Phalcon_Transactions, get);
PHP_METHOD(Phalcon_Transactions, rollbackPendent);
PHP_METHOD(Phalcon_Transactions, commit);
PHP_METHOD(Phalcon_Transactions, rollback);
PHP_METHOD(Phalcon_Transactions, notifyRollback);
PHP_METHOD(Phalcon_Transactions, notifyCommit);
PHP_METHOD(Phalcon_Transactions, _collectTransaction);
PHP_METHOD(Phalcon_Transactions, collectTransactions);
PHP_METHOD(Phalcon_Transactions, isAutomatic);
PHP_METHOD(Phalcon_Transactions, getAutomaticTransaction);


PHP_METHOD(Phalcon_Tag, setRouter);
PHP_METHOD(Phalcon_Tag, _getRouter);
PHP_METHOD(Phalcon_Tag, displayTo);
PHP_METHOD(Phalcon_Tag, _getValueFromAction);
PHP_METHOD(Phalcon_Tag, linkTo);
PHP_METHOD(Phalcon_Tag, textField);
PHP_METHOD(Phalcon_Tag, submitButton);
PHP_METHOD(Phalcon_Tag, selectStatic);
PHP_METHOD(Phalcon_Tag, select);
PHP_METHOD(Phalcon_Tag, textArea);
PHP_METHOD(Phalcon_Tag, form);
PHP_METHOD(Phalcon_Tag, endForm);
PHP_METHOD(Phalcon_Tag, setTitle);
PHP_METHOD(Phalcon_Tag, appendTitle);
PHP_METHOD(Phalcon_Tag, prependTitle);
PHP_METHOD(Phalcon_Tag, getTitle);
PHP_METHOD(Phalcon_Tag, stylesheetLink);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_dispatcher___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, frontController)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_dispatcher_setrouter, 0, 0, 1)
	ZEND_ARG_INFO(0, router)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_request_setfilter, 0, 0, 1)
	ZEND_ARG_INFO(0, filter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_request_getpost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, filters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_request_getquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, filters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_request_getheader, 0, 0, 1)
	ZEND_ARG_INFO(0, header)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller_front_setconfig, 0, 0, 1)
	ZEND_ARG_INFO(0, config)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller_front_setdispatcher, 0, 0, 1)
	ZEND_ARG_INFO(0, dispatcher)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller_front_setbaseuri, 0, 0, 1)
	ZEND_ARG_INFO(0, baseUri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller_front_setbasepath, 0, 0, 1)
	ZEND_ARG_INFO(0, basePath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller_front_setmodelcomponent, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, frontController)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_setviewsdir, 0, 0, 1)
	ZEND_ARG_INFO(0, viewsDir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_settemplatebefore, 0, 0, 1)
	ZEND_ARG_INFO(0, templateBefore)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_settemplateafter, 0, 0, 1)
	ZEND_ARG_INFO(0, templateAfter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_setparamtoview, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_render, 0, 0, 1)
	ZEND_ARG_INFO(0, controller)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_url, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_view_path, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_test_nice, 0, 0, 1)
	ZEND_ARG_INFO(0, word)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_utils_camelize, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_utils_uncamelize, 0, 0, 1)
	ZEND_ARG_INFO(0, str)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_utils_geturl, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, descriptor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_setlogger, 0, 0, 1)
	ZEND_ARG_INFO(0, logger)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_log, 0, 0, 2)
	ZEND_ARG_INFO(0, sqlStatement)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_fetchone, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_fetchall, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_insert, 0, 0, 2)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, values)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, automaticQuotes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_update, 0, 0, 3)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, fields)
	ZEND_ARG_INFO(0, values)
	ZEND_ARG_INFO(0, whereCondition)
	ZEND_ARG_INFO(0, automaticQuotes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_delete, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, whereCondition)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_setundertransaction, 0, 0, 1)
	ZEND_ARG_INFO(0, underTransaction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_getconnectionid, 0, 0, 0)
	ZEND_ARG_INFO(0, asString)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_factory, 0, 0, 2)
	ZEND_ARG_INFO(0, adapterName)
	ZEND_ARG_INFO(0, options)
	ZEND_ARG_INFO(0, persistent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_e6, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_e7, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_e8, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_e14, 0, 0, 1)
	ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o6, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o7, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o8, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o9, 0, 0, 1)
	ZEND_ARG_INFO(0, num)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o10, 0, 0, 2)
	ZEND_ARG_INFO(0, num1)
	ZEND_ARG_INFO(0, num2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o11, 0, 0, 2)
	ZEND_ARG_INFO(0, num1)
	ZEND_ARG_INFO(0, num2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o12, 0, 0, 2)
	ZEND_ARG_INFO(0, num1)
	ZEND_ARG_INFO(0, num2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o13, 0, 0, 2)
	ZEND_ARG_INFO(0, num1)
	ZEND_ARG_INFO(0, num2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_o14, 0, 0, 2)
	ZEND_ARG_INFO(0, num1)
	ZEND_ARG_INFO(0, num2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_internal_test_c11, 0, 0, 3)
	ZEND_ARG_INFO(0, a)
	ZEND_ARG_INFO(0, b)
	ZEND_ARG_INFO(0, c)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_exception___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_router_rewrite_handlestring, 0, 0, 1)
	ZEND_ARG_INFO(0, uri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_router_rewrite_handlearray, 0, 0, 1)
	ZEND_ARG_INFO(0, parts)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_router_rewrite_handleassocarray, 0, 0, 1)
	ZEND_ARG_INFO(0, parts)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_exception___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, code)
	ZEND_ARG_INFO(0, showTrace)
	ZEND_ARG_INFO(0, db)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, descriptor)
	ZEND_ARG_INFO(0, persistent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_connect, 0, 0, 0)
	ZEND_ARG_INFO(0, descriptor)
	ZEND_ARG_INFO(0, persistent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_query, 0, 0, 1)
	ZEND_ARG_INFO(0, sqlStatement)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_fetcharray, 0, 0, 0)
	ZEND_ARG_INFO(0, resultQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_numrows, 0, 0, 0)
	ZEND_ARG_INFO(0, resultQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_dataseek, 0, 0, 1)
	ZEND_ARG_INFO(0, number)
	ZEND_ARG_INFO(0, resultQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_affectedrows, 0, 0, 0)
	ZEND_ARG_INFO(0, resultQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_setfetchmode, 0, 0, 1)
	ZEND_ARG_INFO(0, fetchMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_error, 0, 0, 0)
	ZEND_ARG_INFO(0, errorString)
	ZEND_ARG_INFO(0, resultQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_noerror, 0, 0, 0)
	ZEND_ARG_INFO(0, resultQuery)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_lastinsertid, 0, 0, 0)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, primaryKey)
	ZEND_ARG_INFO(0, sequenceName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_limit, 0, 0, 2)
	ZEND_ARG_INFO(0, sqlQuery)
	ZEND_ARG_INFO(0, number)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_tableexists, 0, 0, 1)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_viewexists, 0, 0, 1)
	ZEND_ARG_INFO(0, viewName)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_describetable, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, schema)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_mysql_getdateusingformat, 0, 0, 1)
	ZEND_ARG_INFO(0, date)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_pool_setdefaultdescriptor, 0, 0, 1)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_pool_getconnection, 0, 0, 0)
	ZEND_ARG_INFO(0, newConnection)
	ZEND_ARG_INFO(0, renovate)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_dialect_mysql_tableexists, 0, 0, 1)
	ZEND_ARG_INFO(0, tableName)
	ZEND_ARG_INFO(0, schemaName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_dialect_mysql_describetable, 0, 0, 1)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, schema)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_db_rawvalue___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_flash__showmessage, 0, 0, 2)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, classes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_flash_error, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, classes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_flash_notice, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, classes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_flash_success, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, classes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_flash_warning, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, classes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_logger___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, adapter)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_logger_setformat, 0, 0, 1)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_config___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, arrayConfig)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_filter_sanitize, 0, 0, 2)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, filters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_filter__sanitize, 0, 0, 2)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, filter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_exception___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, errorCode)
	ZEND_ARG_INFO(0, showTrace)
	ZEND_ARG_INFO(0, backtrace)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_config_adapter_ini___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, filePath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_config_exception___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, dispatcher)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller__forward, 0, 0, 1)
	ZEND_ARG_INFO(0, uri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller__forwardtoaction, 0, 0, 1)
	ZEND_ARG_INFO(0, action)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller_setparamtoview, 0, 0, 2)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_controller___get, 0, 0, 1)
	ZEND_ARG_INFO(0, propertyName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_message___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, field)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_message_settype, 0, 0, 1)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_message_setmessage, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_message_setfield, 0, 0, 1)
	ZEND_ARG_INFO(0, field)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, front)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager_ismodel, 0, 0, 1)
	ZEND_ARG_INFO(0, modelName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager_initializemodel, 0, 0, 1)
	ZEND_ARG_INFO(0, modelName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager_getmodel, 0, 0, 1)
	ZEND_ARG_INFO(0, modelName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager_getsource, 0, 0, 1)
	ZEND_ARG_INFO(0, modelName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager_setmetadata, 0, 0, 1)
	ZEND_ARG_INFO(0, metadata)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_manager_autoload, 0, 0, 1)
	ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, adapter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata__initializemetadata, 0, 0, 3)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, table)
	ZEND_ARG_INFO(0, schema)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata_getattributes, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata_getprimarykeyattributes, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata_getnonprimarykeyattributes, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata_getnotnullattributes, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata_getdatatypes, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_metadata_getdatatypesnumeric, 0, 0, 1)
	ZEND_ARG_INFO(0, model)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, manager)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_setmanager, 0, 0, 1)
	ZEND_ARG_INFO(0, manager)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base__createsqlselectmulti, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base__createsqlselectone, 0, 0, 1)
	ZEND_ARG_INFO(0, select)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base__createresultset, 0, 0, 2)
	ZEND_ARG_INFO(0, select)
	ZEND_ARG_INFO(0, resultResource)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_settransaction, 0, 0, 1)
	ZEND_ARG_INFO(0, transaction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_setsource, 0, 0, 1)
	ZEND_ARG_INFO(0, source)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_setschema, 0, 0, 1)
	ZEND_ARG_INFO(0, schema)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_dumpresult, 0, 0, 1)
	ZEND_ARG_INFO(0, result)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_dumpresultself, 0, 0, 1)
	ZEND_ARG_INFO(0, result)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_find, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_findfirst, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_exists, 0, 0, 0)
	ZEND_ARG_INFO(0, wherePk)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base__exists, 0, 0, 0)
	ZEND_ARG_INFO(0, wherePk)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base__getgroupresult, 0, 0, 3)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, selectStatement)
	ZEND_ARG_INFO(0, alias)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_count, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base__callevent, 0, 0, 1)
	ZEND_ARG_INFO(0, eventName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_appendmessage, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_readattribute, 0, 0, 1)
	ZEND_ARG_INFO(0, attribute)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_base_writeattribute, 0, 0, 2)
	ZEND_ARG_INFO(0, attribute)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, model)
	ZEND_ARG_INFO(0, resultResource)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset_seek, 0, 0, 1)
	ZEND_ARG_INFO(0, position)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset_offsetexists, 0, 0, 1)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset_offsetget, 0, 0, 1)
	ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset_offsetset, 0, 0, 2)
	ZEND_ARG_INFO(0, index)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset_offsetunset, 0, 0, 1)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_resultset_each, 0, 0, 1)
	ZEND_ARG_INFO(0, lambda)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, autoBegin)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_settransactionmanager, 0, 0, 1)
	ZEND_ARG_INFO(0, manager)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_rollback, 0, 0, 0)
	ZEND_ARG_INFO(0, rollbackMessage)
	ZEND_ARG_INFO(0, rollbackRecord)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_setisnewtransaction, 0, 0, 1)
	ZEND_ARG_INFO(0, isNew)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_setrollbackonabort, 0, 0, 1)
	ZEND_ARG_INFO(0, rollbackOnAbort)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_setdependencypointer, 0, 0, 1)
	ZEND_ARG_INFO(0, pointer)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_attachdependency, 0, 0, 2)
	ZEND_ARG_INFO(0, pointer)
	ZEND_ARG_INFO(0, object)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_setrollbackedrecord, 0, 0, 1)
	ZEND_ARG_INFO(0, record)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_model_transaction_failed___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, record)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_transactions_get, 0, 0, 0)
	ZEND_ARG_INFO(0, autoBegin)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_transactions_rollback, 0, 0, 0)
	ZEND_ARG_INFO(0, collect)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_transactions_notifyrollback, 0, 0, 1)
	ZEND_ARG_INFO(0, transaction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_transactions_notifycommit, 0, 0, 1)
	ZEND_ARG_INFO(0, transaction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_transactions__collecttransaction, 0, 0, 1)
	ZEND_ARG_INFO(0, transaction)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_setrouter, 0, 0, 1)
	ZEND_ARG_INFO(0, router)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_displayto, 0, 0, 2)
	ZEND_ARG_INFO(0, id)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag__getvaluefromaction, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_linkto, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, text)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_textfield, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_submitbutton, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_selectstatic, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_select, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_textarea, 0, 0, 1)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_form, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_settitle, 0, 0, 1)
	ZEND_ARG_INFO(0, title)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_appendtitle, 0, 0, 1)
	ZEND_ARG_INFO(0, title)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_prependtitle, 0, 0, 1)
	ZEND_ARG_INFO(0, title)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_tag_stylesheetlink, 0, 0, 0)
	ZEND_ARG_INFO(0, params)
	ZEND_ARG_INFO(0, local)
ZEND_END_ARG_INFO()

static const function_entry phalcon_dispatcher_functions[] = {
	PHP_ME(Phalcon_Dispatcher, __construct, arginfo_phalcon_dispatcher___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Dispatcher, dispatch, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Dispatcher, setRouter, arginfo_phalcon_dispatcher_setrouter, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Dispatcher, getRouter, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Dispatcher, getFrontController, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Dispatcher, getControllers, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_request_functions[] = {
	PHP_ME(Phalcon_Request, __construct, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Request, getInstance, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Request, setFilter, arginfo_phalcon_request_setfilter, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getFilter, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Request, getPost, arginfo_phalcon_request_getpost, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getQuery, arginfo_phalcon_request_getquery, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isAjax, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isFlashRequested, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isSoapRequested, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isSecureRequest, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getRawBody, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getServerAddress, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getServerName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getHeader, arginfo_phalcon_request_getheader, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getScheme, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getHttpHost, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getMethod, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getUserAgent, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isPost, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isGet, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isPut, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isHead, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isDelete, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, isOptions, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, hasFiles, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getUploadedFiles, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getHTTPReferer, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getAcceptableContent, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getClientCharsets, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getBestQualityCharset, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Request, getClientAddress, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_controller_front_functions[] = {
	PHP_ME(Phalcon_Controller_Front, __construct, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Controller_Front, getInstance, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Controller_Front, setConfig, arginfo_phalcon_controller_front_setconfig, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, setDispatcher, arginfo_phalcon_controller_front_setdispatcher, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, getDispatcher, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, setBaseUri, arginfo_phalcon_controller_front_setbaseuri, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, getBaseUri, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, setBasePath, arginfo_phalcon_controller_front_setbasepath, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, getBasePath, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, setModelComponent, arginfo_phalcon_controller_front_setmodelcomponent, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, getModelComponent, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller_Front, dispatchLoop, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_view_functions[] = {
	PHP_ME(Phalcon_View, __construct, arginfo_phalcon_view___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_View, setViewsDir, arginfo_phalcon_view_setviewsdir, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, setTemplateBefore, arginfo_phalcon_view_settemplatebefore, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, setTemplateAfter, arginfo_phalcon_view_settemplateafter, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, setParamToView, arginfo_phalcon_view_setparamtoview, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, render, arginfo_phalcon_view_render, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, getContent, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, url, arginfo_phalcon_view_url, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_View, path, arginfo_phalcon_view_path, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_test_functions[] = {
	PHP_ME(Phalcon_Test, nice, arginfo_phalcon_test_nice, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_utils_functions[] = {
	PHP_ME(Phalcon_Utils, camelize, arginfo_phalcon_utils_camelize, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Utils, uncamelize, arginfo_phalcon_utils_uncamelize, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Utils, getUrl, arginfo_phalcon_utils_geturl, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_db_functions[] = {
	PHP_ME(Phalcon_Db, __construct, arginfo_phalcon_db___construct, ZEND_ACC_PROTECTED|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Db, setLogger, arginfo_phalcon_db_setlogger, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, log, arginfo_phalcon_db_log, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Db, fetchOne, arginfo_phalcon_db_fetchone, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, fetchAll, arginfo_phalcon_db_fetchall, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, insert, arginfo_phalcon_db_insert, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, update, arginfo_phalcon_db_update, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, delete, arginfo_phalcon_db_delete, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, begin, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, rollback, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, commit, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, setUnderTransaction, arginfo_phalcon_db_setundertransaction, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Db, isUnderTransaction, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, getHaveAutoCommit, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, getDatabaseName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, getDefaultSchema, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, getUsername, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, getHostName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, getConnectionId, arginfo_phalcon_db_getconnectionid, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db, factory, arginfo_phalcon_db_factory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_internal_test_functions[] = {
	PHP_ME(Phalcon_Internal_Test, e1, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e2, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e3, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e4, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e5, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e6, arginfo_phalcon_internal_test_e6, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e7, arginfo_phalcon_internal_test_e7, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e8, arginfo_phalcon_internal_test_e8, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e9, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e10, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e11, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e12, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e13, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, e14, arginfo_phalcon_internal_test_e14, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o1, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o2, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o3, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o4, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o5, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o6, arginfo_phalcon_internal_test_o6, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o7, arginfo_phalcon_internal_test_o7, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o8, arginfo_phalcon_internal_test_o8, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o9, arginfo_phalcon_internal_test_o9, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o10, arginfo_phalcon_internal_test_o10, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o11, arginfo_phalcon_internal_test_o11, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o12, arginfo_phalcon_internal_test_o12, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o13, arginfo_phalcon_internal_test_o13, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o14, arginfo_phalcon_internal_test_o14, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o15, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o16, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o17, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o18, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, o19, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a1, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a2, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a3, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a10, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a11, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a12, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a13, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a14, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, a15, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c1, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c2, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c3, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c4, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c5, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c6, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c7, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c8, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c9, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c10, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, c11, arginfo_phalcon_internal_test_c11, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f1, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f2, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f3, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f4, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f5, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f6, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f7, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f8, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, f9, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, m1, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Internal_Test, m2, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Internal_Test, m3, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, m4, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Internal_Test, m5, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_tag_exception_functions[] = {
	PHP_ME(Phalcon_Tag_Exception, __construct, arginfo_phalcon_tag_exception___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_router_rewrite_functions[] = {
	PHP_ME(Phalcon_Router_Rewrite, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Router_Rewrite, handle, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, handleString, arginfo_phalcon_router_rewrite_handlestring, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, handleArray, arginfo_phalcon_router_rewrite_handlearray, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, handleAssocArray, arginfo_phalcon_router_rewrite_handleassocarray, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, getControllerName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, getActionName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, getParams, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, finish, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Router_Rewrite, isRouted, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_db_exception_functions[] = {
	PHP_ME(Phalcon_Db_Exception, __construct, arginfo_phalcon_db_exception___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_db_mysql_functions[] = {
	PHP_ME(Phalcon_Db_MySQL, __construct, arginfo_phalcon_db_mysql___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Db_MySQL, connect, arginfo_phalcon_db_mysql_connect, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, query, arginfo_phalcon_db_mysql_query, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, close, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, fetchArray, arginfo_phalcon_db_mysql_fetcharray, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, numRows, arginfo_phalcon_db_mysql_numrows, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, dataSeek, arginfo_phalcon_db_mysql_dataseek, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, affectedRows, arginfo_phalcon_db_mysql_affectedrows, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, setFetchMode, arginfo_phalcon_db_mysql_setfetchmode, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, error, arginfo_phalcon_db_mysql_error, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, noError, arginfo_phalcon_db_mysql_noerror, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, lastInsertId, arginfo_phalcon_db_mysql_lastinsertid, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, limit, arginfo_phalcon_db_mysql_limit, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, tableExists, arginfo_phalcon_db_mysql_tableexists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, viewExists, arginfo_phalcon_db_mysql_viewexists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, describeTable, arginfo_phalcon_db_mysql_describetable, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_MySQL, getDateUsingFormat, arginfo_phalcon_db_mysql_getdateusingformat, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_db_pool_functions[] = {
	PHP_ME(Phalcon_Db_Pool, hasDefaultDescriptor, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Db_Pool, setDefaultDescriptor, arginfo_phalcon_db_pool_setdefaultdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Db_Pool, getConnection, arginfo_phalcon_db_pool_getconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_db_dialect_mysql_functions[] = {
	PHP_ME(Phalcon_Db_Dialect_MySQL, tableExists, arginfo_phalcon_db_dialect_mysql_tableexists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Db_Dialect_MySQL, describeTable, arginfo_phalcon_db_dialect_mysql_describetable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_db_rawvalue_functions[] = {
	PHP_ME(Phalcon_Db_RawValue, __construct, arginfo_phalcon_db_rawvalue___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Db_RawValue, getValue, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Db_RawValue, __toString, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_flash_functions[] = {
	PHP_ME(Phalcon_Flash, _showMessage, arginfo_phalcon_flash__showmessage, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Flash, error, arginfo_phalcon_flash_error, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Flash, notice, arginfo_phalcon_flash_notice, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Flash, success, arginfo_phalcon_flash_success, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Flash, warning, arginfo_phalcon_flash_warning, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_logger_functions[] = {
	PHP_ME(Phalcon_Logger, __construct, arginfo_phalcon_logger___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Logger, setFormat, arginfo_phalcon_logger_setformat, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_config_functions[] = {
	PHP_ME(Phalcon_Config, __construct, arginfo_phalcon_config___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_filter_functions[] = {
	PHP_ME(Phalcon_Filter, sanitize, arginfo_phalcon_filter_sanitize, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Filter, _sanitize, arginfo_phalcon_filter__sanitize, ZEND_ACC_PRIVATE) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_exception_functions[] = {
	PHP_ME(Phalcon_Exception, __construct, arginfo_phalcon_exception___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_config_adapter_ini_functions[] = {
	PHP_ME(Phalcon_Config_Adapter_Ini, __construct, arginfo_phalcon_config_adapter_ini___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_config_exception_functions[] = {
	PHP_ME(Phalcon_Config_Exception, __construct, arginfo_phalcon_config_exception___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_controller_functions[] = {
	PHP_ME(Phalcon_Controller, __construct, arginfo_phalcon_controller___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Controller, _forward, arginfo_phalcon_controller__forward, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Controller, _forwardToAction, arginfo_phalcon_controller__forwardtoaction, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Controller, _getViewComponent, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Controller, getRequest, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Controller, setParamToView, arginfo_phalcon_controller_setparamtoview, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller, getViewComponent, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller, getControllerName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller, getActionName, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Controller, __get, arginfo_phalcon_controller___get, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_message_functions[] = {
	PHP_ME(Phalcon_Model_Message, __construct, arginfo_phalcon_model_message___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_Message, setType, arginfo_phalcon_model_message_settype, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Message, getType, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Message, setMessage, arginfo_phalcon_model_message_setmessage, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Message, getMessage, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Message, setField, arginfo_phalcon_model_message_setfield, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Message, getField, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Message, __toString, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_manager_functions[] = {
	PHP_ME(Phalcon_Model_Manager, __construct, arginfo_phalcon_model_manager___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_Manager, isModel, arginfo_phalcon_model_manager_ismodel, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, initializeModel, arginfo_phalcon_model_manager_initializemodel, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, getModel, arginfo_phalcon_model_manager_getmodel, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, getSource, arginfo_phalcon_model_manager_getsource, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, getConnection, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, setMetaData, arginfo_phalcon_model_manager_setmetadata, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, getMetaData, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Manager, autoload, arginfo_phalcon_model_manager_autoload, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_metadata_functions[] = {
	PHP_ME(Phalcon_Model_MetaData, __construct, arginfo_phalcon_model_metadata___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_MetaData, _initializeMetaData, arginfo_phalcon_model_metadata__initializemetadata, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_MetaData, getAttributes, arginfo_phalcon_model_metadata_getattributes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_MetaData, getPrimaryKeyAttributes, arginfo_phalcon_model_metadata_getprimarykeyattributes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_MetaData, getNonPrimaryKeyAttributes, arginfo_phalcon_model_metadata_getnonprimarykeyattributes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_MetaData, getNotNullAttributes, arginfo_phalcon_model_metadata_getnotnullattributes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_MetaData, getDataTypes, arginfo_phalcon_model_metadata_getdatatypes, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_MetaData, getDataTypesNumeric, arginfo_phalcon_model_metadata_getdatatypesnumeric, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_base_functions[] = {
	PHP_ME(Phalcon_Model_Base, __construct, arginfo_phalcon_model_base___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_Base, setManager, arginfo_phalcon_model_base_setmanager, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, _connect, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Model_Base, _getAttributes, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _getPrimaryKeyAttributes, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _getNonPrimaryKeyAttributes, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _getNotNullAttributes, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _getDataTypesNumeric, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _getDataTypes, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, dump, NULL, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Model_Base, _createSQLSelectMulti, arginfo_phalcon_model_base__createsqlselectmulti, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _createSQLSelectOne, arginfo_phalcon_model_base__createsqlselectone, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _createResultset, arginfo_phalcon_model_base__createresultset, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, setTransaction, arginfo_phalcon_model_base_settransaction, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, isView, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, setSource, arginfo_phalcon_model_base_setsource, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Model_Base, getSource, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, setSchema, arginfo_phalcon_model_base_setschema, ZEND_ACC_PROTECTED) 
	PHP_ME(Phalcon_Model_Base, getSchema, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, getConnection, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, dumpResult, arginfo_phalcon_model_base_dumpresult, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, dumpResultSelf, arginfo_phalcon_model_base_dumpresultself, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, find, arginfo_phalcon_model_base_find, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, findFirst, arginfo_phalcon_model_base_findfirst, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, exists, arginfo_phalcon_model_base_exists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, _exists, arginfo_phalcon_model_base__exists, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _getGroupResult, arginfo_phalcon_model_base__getgroupresult, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, count, arginfo_phalcon_model_base_count, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, _callEvent, arginfo_phalcon_model_base__callevent, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, _cancelOperation, NULL, ZEND_ACC_PRIVATE) 
	PHP_ME(Phalcon_Model_Base, appendMessage, arginfo_phalcon_model_base_appendmessage, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, getMessages, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, save, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, delete, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, readAttribute, arginfo_phalcon_model_base_readattribute, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Base, writeAttribute, arginfo_phalcon_model_base_writeattribute, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_metadata_memory_functions[] = {
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_resultset_functions[] = {
	PHP_ME(Phalcon_Model_Resultset, __construct, arginfo_phalcon_model_resultset___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_Resultset, valid, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, current, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, next, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, key, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, rewind, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, seek, arginfo_phalcon_model_resultset_seek, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, count, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, offsetExists, arginfo_phalcon_model_resultset_offsetexists, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, offsetGet, arginfo_phalcon_model_resultset_offsetget, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, offsetSet, arginfo_phalcon_model_resultset_offsetset, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, offsetUnset, arginfo_phalcon_model_resultset_offsetunset, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, getFirst, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, getLast, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, getModel, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Resultset, each, arginfo_phalcon_model_resultset_each, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_exception_functions[] = {
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_transaction_functions[] = {
	PHP_ME(Phalcon_Model_Transaction, __construct, arginfo_phalcon_model_transaction___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_Transaction, setTransactionManager, arginfo_phalcon_model_transaction_settransactionmanager, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, begin, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, commit, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, rollback, arginfo_phalcon_model_transaction_rollback, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, getConnection, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, setIsNewTransaction, arginfo_phalcon_model_transaction_setisnewtransaction, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, setRollbackOnAbort, arginfo_phalcon_model_transaction_setrollbackonabort, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, isManaged, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, setDependencyPointer, arginfo_phalcon_model_transaction_setdependencypointer, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, attachDependency, arginfo_phalcon_model_transaction_attachdependency, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, save, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, getMessages, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, isValid, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction, setRollbackedRecord, arginfo_phalcon_model_transaction_setrollbackedrecord, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_model_transaction_failed_functions[] = {
	PHP_ME(Phalcon_Model_Transaction_Failed, __construct, arginfo_phalcon_model_transaction_failed___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR) 
	PHP_ME(Phalcon_Model_Transaction_Failed, getRecordMessages, NULL, ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Model_Transaction_Failed, getRecord, NULL, ZEND_ACC_PUBLIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_transactions_functions[] = {
	PHP_ME(Phalcon_Transactions, hasUserTransaction, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, get, arginfo_phalcon_transactions_get, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, rollbackPendent, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, commit, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, rollback, arginfo_phalcon_transactions_rollback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, notifyRollback, arginfo_phalcon_transactions_notifyrollback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, notifyCommit, arginfo_phalcon_transactions_notifycommit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, _collectTransaction, arginfo_phalcon_transactions__collecttransaction, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, collectTransactions, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, isAutomatic, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Transactions, getAutomaticTransaction, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	{NULL, NULL, NULL}
};

static const function_entry phalcon_view_exception_functions[] = {
	{NULL, NULL, NULL}
};

static const function_entry phalcon_tag_functions[] = {
	PHP_ME(Phalcon_Tag, setRouter, arginfo_phalcon_tag_setrouter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, _getRouter, NULL, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, displayTo, arginfo_phalcon_tag_displayto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, _getValueFromAction, arginfo_phalcon_tag__getvaluefromaction, ZEND_ACC_PROTECTED|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, linkTo, arginfo_phalcon_tag_linkto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, textField, arginfo_phalcon_tag_textfield, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Tag, submitButton, arginfo_phalcon_tag_submitbutton, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Tag, selectStatic, arginfo_phalcon_tag_selectstatic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, select, arginfo_phalcon_tag_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, textArea, arginfo_phalcon_tag_textarea, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC) 
	PHP_ME(Phalcon_Tag, form, arginfo_phalcon_tag_form, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, endForm, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, setTitle, arginfo_phalcon_tag_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, appendTitle, arginfo_phalcon_tag_appendtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, prependTitle, arginfo_phalcon_tag_prependtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, getTitle, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	PHP_ME(Phalcon_Tag, stylesheetLink, arginfo_phalcon_tag_stylesheetlink, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC) 
	{NULL, NULL, NULL}
};

static function_entry main_functions[] = {
        {NULL, NULL, NULL}
};

