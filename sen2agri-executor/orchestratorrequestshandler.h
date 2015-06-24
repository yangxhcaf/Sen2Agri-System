#ifndef ORCHESTRATORREQUESTSHANDLER_H
#define ORCHESTRATORREQUESTSHANDLER_H

#include <QString>
#include <QObject>

struct SubmittedStep
{
    int taskId;
    QString processorName;
    QString stepName;
    QList<QString> arguments;
};

/**
 * @brief The OrchestratorRequestsHandler class
 * \note
 * This class is in charge with handling the requests via DBus from the orchestrator
 */
class OrchestratorRequestsHandler : public QObject
{
    Q_OBJECT

public:
    // TODO remove
    Q_INVOKABLE bool ExecuteProcessor(const QString &jsonCfgStr);
    Q_INVOKABLE bool StopProcessorJob(const QString &jobName);


    // TODO implement
    Q_INVOKABLE void SubmitSteps(const QList<SubmittedStep> &steps) { }
    Q_INVOKABLE void CancelTask(int taskId) { }
};

#endif // ORCHESTRATORREQUESTSHANDLER_H